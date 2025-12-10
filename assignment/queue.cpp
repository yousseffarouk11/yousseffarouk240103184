
#include <iostream>
using namespace std;


struct node {
    int data;
    node* next;
};


class Queue {
private:
    node* frontPtr;
    node* rearPtr;

public:
    Queue() {
        frontPtr = rearPtr = NULL;
    }

    void enqueue(int value) {
        node* newnode = new node;
        newnode->data = value;
        newnode->next = NULL;

        if (rearPtr == NULL) {
            frontPtr = rearPtr = newnode;
            return;
        }

        rearPtr->next = newnode;
        rearPtr = newnode;
    }

    int dequeue() {
        if (frontPtr == NULL) {
            cout << "Queue is empty!\n";
            return -1;
        }

        node* temp = frontPtr;
        int val = temp->data;

        frontPtr = frontPtr->next;
        if (frontPtr == NULL) {
            rearPtr = NULL;
        }

        delete temp;
        return val;
    }

    int front() {
        if (frontPtr == NULL) {
            cout << "Queue is empty!\n";
            return -1;
        }
        return frontPtr->data;
    }

    bool isEmpty() {
        return frontPtr == NULL;
    }