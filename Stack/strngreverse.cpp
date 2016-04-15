#include<iostream>
#include<cstring>
using namespace std;
class Stack{
private:
    char str[10];
    int top=-1;
public:
    void Push(char ,int);
    void Reverse();
    void Pop();
};
void Stack :: Push(char p, int len)
{
    if(top==len)
    {
        cout<<"Stack full";
    }
    else{
        top++;
        str[top] = p;
    }

}
void Stack :: Reverse()
{
    int length;
    char k;
    cout<<"Enter the string size:";
    cin>>length;
    cout<<"Enter the characters of the string:";
    for(int i=0;i<length;i++)
    {
        cin>>k;
        Push(k,length);
    }
    for(int i=length;i>0;i--)
    {
        Pop();
    }

}
void Stack :: Pop()
{
    char temp;
    if(top==-1)
    {
        cout<<"Stack is empty";
    }
    else{
        temp = str[top];
        cout<<str[top];
        top--;
    }

}
int main()
{
    Stack S;
    S.Reverse();
    //cout<<"Working";
    //cout<<"Working";

}
