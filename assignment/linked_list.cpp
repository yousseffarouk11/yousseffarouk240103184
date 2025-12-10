#include<iostream>
using namespace std;


struct node
{
int data;
node* next ;

};

class linkedlist{

node* head;




linkedlist(){
head =NULL;
}




 void add_first(int x){
       node new_node;


    if ( head ==NULL)
    {
       head= &new_node;
       new_node.data= x ;
       new_node.next=NULL ;
    }
    else{
      new_node.data=x;
      new_node.next= head;
      head=&new_node;


    }
    



 }
 void add_end(int x){
   node last_node;
   node* end_elemnt;
   end_elemnt=head;
   while (end_elemnt->next != NULL)
   {
      end_elemnt=&last_node;
      last_node.next=NULL;
      last_node.data=x;
   }
 }
void add_inmeddile(int x, int index){
  node new_node ;
node* y;
y=head;
int c=0;
while (y->next!=NULL && index !=c)
{
y= y->next;
c++;
}
new_node.next=y->next ;
   y->next=new_node.next ;

}
void insret_value(int x ){
     node new_node ;
node* y;
y=head;
int value;
while (y->next!=NULL && y->data!=value)
{
y= y->next;

}
new_node.next=y->next ;
   y->next=new_node.next ;
}

void delete_first() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    node* temp = head;   // امسك أول نود
    head = head->next;   // حرك الهيد للي بعده
    delete temp;         // امسح القديم
}


void delete_last() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (head->next == NULL){ 
        delete head;
        head = NULL;
        return;
    }

    node* prev = NULL;
    node* curr = head;

    while (curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }

    prev->next = NULL;   // اقفل الليست قبل آخر نود
    delete curr;       //امسح آخر نود
}

void delete_middle(int index) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (index == 0) {
        delete_first();
        return;
    }

    node* curr = head;
    node* prev = NULL;
    int c = 0;

    while (curr != NULL && c < index) {
        prev = curr;
        curr = curr->next;
        c++;
    }

    if (curr == NULL) {
        cout << "Index out of range" << endl;
        return;
    }

    prev->next = curr->next;
    delete curr;
}







 
};

