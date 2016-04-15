#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *top = NULL;
void push()
{
    cout<<"==================INSERTION========================="<<endl;
    int value;
    cout<<"Enter the value to be pushed";
    cin>>value;
    Node *temp = new Node();
    temp->data = value;
    temp->next = top;
    top = temp;
}
void pop()
{
    cout<<"=================DELETION=============================="<<endl;
    if(top == NULL)
        cout<<"EMPTY STACK";
    else
        {
            top = top->next;
        }
}
void display()
{
    Node *temp = top;
    if(top == NULL)
        cout<<"Empty List";
    else
    {
        while(temp->next!= NULL){
            temp = temp->next;
            cout<<temp->data<<" ";
        }
        cout<<endl;
    }

}
int main ()
{
int dopt =1;
int opt;
do{
cout<<"Enter any of the option:\n1.Insertion\n2.Deletion"<<endl;
cin>>opt;
switch(opt){

    case 1 : push();
             display();
             break;
    case 2 : pop();
             display();
             break;
    default: cout<<"Invalid Option";
             break;
}
    cout<<"Press 1 to continue:";
    cin>>dopt;
}while (dopt == 1);
return 0;
}
