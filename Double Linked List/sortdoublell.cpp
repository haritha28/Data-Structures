#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
//Insert at head
void insert_head(int value)
{
    Node *temp = new Node();
    temp->data = value;
    temp->next = head;
    head = temp;
}
//Insert at Tail
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
//Insert at position
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
//Display function
 void display()
{
    cout<<"Empty";
    Node *temp;
    if(head == NULL)
        cout<<"Empty";
    else{
        temp = head;
        while(temp!=0)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
 }
int main()
{
    int k,mopt,isubopt,dsubopt,pos;
    int choose =1;
    do{
    cout<<"Enter one of the option to:\n1. Insertion\n2. Deletion";
    cin>>mopt;
    switch(mopt)    {

        case 1  :

    }
    switch(isubopt)
    {
    case 1 :    insert_head(k);
                display();
                break;
    case 2 :    insert_last(k);
                display();
                break;
    case 3 :    cout<<"Enter the position to be inserted:";
                cin>>pos;
                insert_pos(k, pos);
                display();6
                break;

    }
    cout<<"Press 1 to continue";
    cin>>choose;
    } while(choose == 1);

}
