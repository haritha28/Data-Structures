#include<iostream>
using namespace std;
class Stack{
private:
    int a[100];
    int top = -1;
public:
    void push(int );
    void pop();
    void display();
    bool isEmpty();
    void Top();
    void getMin(int );
};
void Stack :: getMin(int n)
{
    int small;
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                small = a[i];
                a[i] = a[j];
                a[j] = small;
            }
        }
    }
    cout<<"The minimum value is:"<<a[top];
}
bool Stack :: isEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}
void Stack :: Top()
{
    cout<<"The top is at:"<<top;

}
void Stack :: push(int n)
{
    int k;
    cout<<"Enter the element to be pushed: ";
    cin>>k;
    if(top==n)
    {
        cout<<"Stack is Full";
    }
    else{
        a[top+1]=k;
        top++;
    }
}
void Stack :: pop()
{
    int temp;
    if(top==-1)
    {
        cout<<"Stack is empty";
    }
    else{
        temp = a[top];
        a[top]= NULL;
        top--;
    }
}
void Stack :: display()
{
    cout<<"The array is :";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    Stack S;
    int opt,ins,Size,mopt=1;
    cout<<"Enter the array size:";
    cin>>Size;
    do{
    cout<<"Enter any one of the option: \n1. Push \n2. Pop \n3.Minimum element"<<endl;
    cin>>opt;
    switch(opt){
    case 1  :
                for(int i=0;i<Size;i++)
                {
                S.push(Size);
                }
                S.display();
                break;
    case 2 :    S.pop();
                S.display();
                break;
    case 3 :    S.getMin(Size);
                break;
    default:    cout<<"Invalid Option";
                break;
    }
    cout<<"Press 1 to continue:";
    cin>>mopt;
    } while(mopt==1);
    return 0;
}
