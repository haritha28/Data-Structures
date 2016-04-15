#include<iostream>
using namespace std;
class Queue{
private:
    int Front = -1,rear = -1, A[10], Size;
public:

void Enter()
{
    int opt;
    int y=1;
    int x;
    do{
    cout<<"Enter an option below:\n1. Insert at rear \n2. Delete at front \n3. Insert at front \n4. Delete at rear"<<endl;
    cin>>opt;
    if(opt==1)
    {
                cout<<"Enter the size of the array:";
                cin>>Size;
                cout<<"Enter the element to be pushed";
                for(int i=0;i<Size;i++)
                {
                     cin>>x;
                     Enqueue1(x);
                }
                Display();
    }
    else if(opt==2)
    {
                Dequeue1();
                Display();
    }
    else if(opt==3)
    {
                cout<<"Enter the size of the array:";
                cin>>Size;
                cout<<"Enter the element to be pushed";
                for(int i=0;i<Size;i++)
                {
                     cin>>x;
                     Enqueue2(x);
                }
                Display();
    }
     else if(opt==4)
    {
                Dequeue2();
                Display();
    }

    cout<<"Press 1 to continue:";
    cin>>y;
    } while(y==1);


}

bool IsEmpty()
{
    if((rear == -1 )&& (Front == -1))
        return true;
    else
        return false;
}
void Enqueue1(int x)
{
    if(rear==Size)
        cout<<"Queue is Full"<<endl;
    else if(IsEmpty())
    {
        Front=0;
        rear=0;
        A[rear]=x;
    }
    else
    {
        rear=(rear+1)%Size;
        A[rear]=x;
    }
}
void Dequeue1()
{
    if(IsEmpty())
        cout<<"Queue is empty"<<endl;
    else if(rear == Front)
    {
        Front = rear = -1;
    }
    else
        Front=(Front+1)%Size;
}
void Enqueue2(int x)
{
    if((rear+1)%Size==Front)
        cout<<"Queue is Full"<<endl;
    else if(IsEmpty())
    {
        Front=0;
        rear=0;
        A[Front]=x;
    }
    else
    {
        Front=(Front+ Size -1)%Size ;
        A[Front]=x;
    }
}
void Dequeue2()
{
    if(IsEmpty())
        cout<<"Queue is empty"<<endl;
    else if(rear == Front)
    {
        Front = rear = -1;
    }
    else
        rear=(rear+Size -1)%Size;
}
void Display()
{
    for(int i=Front;i<=rear;i++)
    {
        cout<<A[i]<<" ";
    }
}
};
int main()
{
    Queue Q;
    Q.Enter();

return 0;
}

