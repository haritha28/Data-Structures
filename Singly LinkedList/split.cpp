#include<iostream>
using namespace std;
struct Node{
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
void insert_tail(int value)
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
void insert_element(){
    int value,pos,iopt;
    cout<<"Enter value to be inserted";
    cin>>value;
    cout<<"Enter the option:\n1.At head\n2.At tail\n3.At pos";
    cin>>iopt;
    switch(iopt){
        case 1 : insert_head(value);
                 break;
        case 2 : insert_tail(value);
                 break;
        case 3 : cout<<"Enter the position to be entered";
                 cin>>pos;
                 insert_pos(value,pos);
                 break;
        default: cout<<"No other choice";
                 break;
    }
}
void Split()
{
    Node *temp = head;
    Node *otemp = new Node();
    Node *etemp = new Node();
    Node *ohead = NULL;
    Node *ehead = NULL;
    int n=0;
    if(temp == NULL)
        cout<<"Empty list";
    else{
        while (temp->next!=NULL) {
            n++;
            if(n%2==1)
            {
                otemp->data = temp->data;
                otemp->next = ohead;
                ohead = otemp;
            }
            else {
                etemp->data = temp->data;
                etemp->next = ehead;
                ehead = etemp;
            }
            temp = temp->next;
        }
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
    int dopt =1;
    do{
    int opt;
    cout<<"Enter an option:\n1.Insert element\n2.Split list";
    cin>>opt;
    switch(opt){
        case 1 : insert_element();
                 break;
        case 2 : Split();
                 display();
                 break;
        default: cout<<"Invalid Option";
                 break;
    }
    cout<<"Press 1 to continue:";
    cin>>dopt;
    } while(dopt==1);
  return 0;
}
