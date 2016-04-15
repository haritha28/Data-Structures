#include<iostream>
using namespace std;
struct Node{
    int   data;
    Node *next;
    Node *prev;
};
Node *head = NULL;

void insert_head(int value){

    Node *temp = new Node();
    Node *temp1;

    if(head == NULL)
    {
       temp->data=value;
       temp->next=temp;
       head=temp;
    }
    else{
        temp1=head;
        while(temp1->next!=head)
        {
            temp1=temp1->next;
        }
        temp->data = value;
        temp->next = head;
        temp1->next=temp;
        head=temp;
}
}
void insert_tail(int value) {
    Node *temp1 = new Node();
    Node *temp = new Node();
    if(head == NULL)
    {
       temp->data=value;
       temp->next=temp;
       head=temp;
    }
    else{
        temp1=head;
        while(temp1->next!=head)
        {
            temp1=temp1->next;
        }
        temp->data = value;
        temp->next = head;
        temp1->next=temp;

}
}
void insert_pos(int value, int pos)  {
    Node *temp2 = new Node();
    Node *temp = new Node();
    int i = 1;
    temp2 = head;
    while(i<pos-1)  {

        temp2 = temp2->next;
        i++;
    }
    temp->data=value;
    temp2->next= temp ->next;
    temp2->next = temp;

}

void display()
{
    Node *temp;
    temp = head;
    if(head->next=head){
      cout<<head->data<<" ";
    }
    else{
        while(temp==head)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

}


void delete_node(int n)  {
    Node *temp=new Node();
    Node *t2;
    temp = head;
    if(n==1)    {
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=head->next;
        head=head->next;
    }

    else    {
        int i=1;
        temp=head;
        while(i<n-1)    {

            temp = temp->next;
            i++;
        }
   temp->next=temp->next->next;
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

