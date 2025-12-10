#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};

class DoublyList {
public:
    node* head;

    DoublyList() {
        head = NULL;
    }



    void insert_first(int x) {
        node* newnode = new node;
        newnode->data = x;
        newnode->prev = NULL;
        newnode->next = head;

        if (head != NULL)
            head->prev = newnode;

        head = newnode;
    }

    void insert_End(int x) {
        node* newnode = new node;
        newnode->data = x;
        newnode->next = NULL;

        if (head == NULL) {
            newnode->prev = NULL;
            head = newnode;
            return;
        }

        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->prev = temp;
    }

    void insert_middle(int x, int pos) {
        node* newnode = new node;
        newnode->data = x;

        node* temp = head;
        int count = 0;

        while (temp != NULL && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == NULL) return;  

        newnode->next = temp->next;
        newnode->prev = temp;

        if (temp->next != NULL)
            temp->next->prev = newnode;

        temp->next = newnode;
    }



void deleteFirst() {
    if (head == NULL) {             
        return;
    }

    node* temp = head;              // امسك أول نود
    head = head->next;              // الهيد يتحرك للنود اللي بعدها

    if (head != NULL)               // لو لسه في نود بعده
        head->prev = NULL;          // أول نود ميبقاش ليها prev

    delete temp;                    // احذف القديم
}

void deleteLast() {
    if (head == NULL) {             // فاضية
        return;
    }

    if (head->next == NULL) {       // لو عنصر واحد بس
        delete head;
        head = NULL;
        return;
    }

    node* temp = head;

    while (temp->next != NULL) {    // امشي لحد آخر نود
        temp = temp->next;
    }

    temp->prev->next = NULL;        // افصل آخر نود عن اللي قبله
    delete temp;                    // احذف آخر نود
}

void deletePosition(int pos) {
    if (head == NULL) {             // فاضية
        return;
    }

    if (pos == 0) {                 // حذف أول عنصر
        deleteFirst();
        return;
    }

    node* temp = head;
    int c = 0;

    while (temp != NULL && c < pos) { // امشي لحد ما توصل
        temp = temp->next;
        c++;
    }

    if (temp == NULL) {        
        return;
    }

    temp->prev->next = temp->next;  // اربط اللي قبل باللي بعد

    if (temp->next != NULL)         // لو مش آخر عنصر
        temp->next->prev = temp->prev;

    delete temp;                    // احذف النود
}

    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};