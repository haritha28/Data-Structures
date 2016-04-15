#inlclude<iostream>
using namespace std;
struct Node{
    int data;
    Node *temp;
};
Node *rear = NULL;
Node *front= NULL;
void enqueue()
{
    int value;
    cout<<"Enter the value";
    cin>> value;
    Node *temp = new Node();
    temp->data = value;
    temp->next = NULL;
    if(front==rear)
        front = rear = temp;
    else{
        rear->next = temp;
        rear = temp;
    }
}
void dequeue()
{
    temp = front;
    if(front == NULL)
    {
        cout<<"Empty Queue";
    }
    else if(front == rear)
    {
        front = rear = NULL;
    }
    else{
        front = temp->next;
    }
}
void display()
{
    Node *temp = rear;
    if(front == rear)
        cout<<"Empty List";
    else {
        while(rear->next!=NULL)
        {
            cout<<temp->data;
            temp = temp->next;
        }
    }
}

int main()
{
    int opt,dopt=1;
    cout<<"Enter any one option\n1.Enqueue\n2.Dequeue";
    cin>>opt;
    do{
    switch(opt){
        case 1 :    enqueue();
                    display();
                    break;
        case 2 :    dequeue();
                    display();
                    break;
        default:    cout<<"Invalid Option";
                    break;
    }
    cout<<"Press 1 to continue":
    cin>>dopt;
    }while(dopt == 1);
}
