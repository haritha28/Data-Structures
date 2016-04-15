#include<iostream>
using namespace std;
struct Node{
    int   data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
//Function to insert at head
void insert_head(int value){
    //Create a new node
    Node *temp = new Node();
    temp->data = value;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL)
        head = temp;
    else{
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
//Function to insert at tail
void insert_tail(int value) {
    Node *temp1 = new Node();   //A node for traversing
    //New node created
    Node *temp = new Node();
    temp->data = value;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL)
        head = temp;
    else    {
        temp1 = head;
        while(temp1->next!= NULL){
            temp1 = temp1->next;
        }
            temp1->next = temp;
            temp->prev = temp1;
            }
}
//Functon to insert at any position k
void insert_pos(int value, int pos)  {
    Node *temp2 = new Node();
    //Create a new node
    Node *temp = new Node();
    temp->data = value;
    temp->next = NULL;
    temp->prev = NULL;
    int i = 1;
    temp2 = head;
    while(i<pos-1)  {
        i++;
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next->prev =  temp;
    temp2->next = temp;
    temp->prev = temp2;
}
//Function to display
void display()
{
    Node *temp;
    temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}
//Fucntion to delete an element from nth position

void delete_node(int n)  {
    Node *temp;
    Node *t2;
    temp = head;
    if(n==1)    {
        head = temp->next;
        head->prev = NULL;
    }
    else    {
        int i=1;
        while(i<n-1)    {
            i++;
            temp = temp->next;
        }
    t2 = temp->next;
    temp->next = t2->next;
    t2->next->prev = temp;
    }

}

int main()  {
int opt,sopt,value,pos,n;
int mopt = 1;
do  {
    cout<<"Enter any of the option:\n1.Insert\n2.Delete";
    cin>>opt;
    switch(opt)
    {
        case 1  :   cout<<"Enter any one of the option:\n1.Insert at head\n2.Insert at tail\n3.Insert at position\n";
                    cin>>sopt;
                    cout<<"Enter the value to be entered";
                    cin>>value;
                    switch(sopt){
                        case 1  : insert_head(value);
                                  display();
                                  break;
                        case 2  : insert_tail(value);
                                  display();
                                  break;
                        case 3  : cout<<"Enter the positon to be entered";
                                  cin>>pos;
                                  insert_pos(value,pos);
                                  display();
                                  break;
                    }
                    break;
        case 2  :   cout<<"Enter the position of the element you want to delete:";
                    cin>>n;
                    delete_node(n);
                    display();
                    break;

    }
    cout<<"Press 1 to continue: ";
    cin>>mopt;
}while(mopt==1);
return 0;
}
