#include<iostream>
#include<iomanip>
using namespace std;
int choice;
int index;
struct Node{
    int data;
    Node* next;
};
Node* head = NULL;
 //Function to insert at head
void insert_head(int value) {
    Node *temp = new Node();
    temp->data = value;
    temp->next = head;
    head = temp;
}
//Insert at positon k
void insert_pos(int value, int pos)
{
    int i=0;
    Node *temp = head;
    while (i<pos-1)
    {
        temp = temp->next;
        i++;
    }
    Node *t2 = new Node();
    t2->data = value;
    t2->next = temp->next;
    temp->next = temp;

}
//Function to insert at tail
void insert_last(int value)
{
    Node *temp = new Node;
    temp->data = value;
    temp->next = NULL;
    if(head == NULL)
        head = temp;
    else
    {
        Node *t2 = head;
        while (t2->next!= NULL)
        {
            t2= t2->next;
        }
        t2->next = temp;
    }
}
//Function to insert elements
void insert_element()
{
    cout<<"=========================INSERTION========================"<<endl;
    int choice,value,pos;
    cout<<"1.1nsert at beginning \n2.Insert at the end \n3.Insert at a particular index:"<<endl;
    cin>>choice;
    cout<<"Enter the number:";
    cin>>value;
    switch(choice){
    case 1: insert_head(value);
            break;
    case 2: cout<<"Enter the position to be inserted:";
            cin>>pos;
            insert_pos(value,pos);
            break;
    case 3: insert_last(value);
            break;
    }

}
//Function to diaplay elements.
void display(){
    cout<<"Your linked list is:"<<endl;
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
//Function with recurssion
void revrse_display(Node *head) {
        if(head==NULL){
            cout<<"\n";
            return;
        }
        else{
            revrse_display(head->next);
            cout<<head->data;
        }
}
//Fucntion to reverse the linked list
void Reverse() {
    Node *current,*prev,*next;
    current = head;
    prev = NULL;
    while(current!= NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main() {
    char choice3 = 'y';
    while(choice3 == 'y'){
        insert_element();
        cout<<"To insert another element press y";
        cin>>choice3;
    }
    int choice4;
    cout<<"Array before reversing:";
    display();
    cout<<"Enter any option\n\t1.Reverse using recursion\n\t2.Reverse without using recursion\n:";
    cin>>choice4;
    if(choice4 == 1){
        revrse_display(head);
    }
    else{
        Reverse();
    }
    display();
    return 0;
}
