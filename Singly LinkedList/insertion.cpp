#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
void insert_head(int value)
{
    Node *temp = new Node();
    temp->data = value;
    temp->next = head;
    head = temp;
}
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
void delete_pos(int pos){
    int i;
    Node *temp = new Node();
    temp = head;
    Node *t2 = new Node();
    if(pos == 1)
    {
        head = temp->next;
    }
    else {
        i =1;
        while(i<pos-1)
        {
            temp = temp->next;
            i++;
        }
        t2 = temp->next;
        temp->next = t2->next;
    }
 }
 void display()
 {  cout<<"Empty";
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
    if(mopt==1)
    {

        cout<<"Enter any of the option:\n1. Insertion at Front\n2.Insertion at Last\n3.Inserion at k";
        cin>>isubopt;
        cout<<"Enter the value to be inserted:";
        cin>>k;
    }
    else if(mopt==2)
    {
       cout<<"Enter the position to be deleted:";
       cin>>pos;
       delete_pos(pos);
       display();
    }
    else
    {
        cout<<"INVALID OPTION";
    }
    switch(isubopt)
    {
    case 1 :
        insert_head(k);
        display();
        break;
    case 2 :
        insert_last(k);
        display();
        break;
    case 3 :
        cout<<"Enter the position to be inserted:";
        cin>>pos;
        insert_pos(k, pos);
        display();
        break;

    }
    cout<<"Press 1 to continue";
    cin>>choose;
    } while(choose == 1);

}
