#include<iostream>
#include<cstring>
using namespace std;
class Stack{
private:
    char str[20];
    int top = -1;
public:
    void Enter();
    void Push(char , int );
    void Delete(int );
};
void Stack :: Enter()
{
    int length;
    char k;
    cout<<"Enter the length of the string:";
    cin>>length;
    cout<<"Enter your characters:";
    for(int i =0;i<length;i++)
    {
        cin>>k;
        Push(k,length);
    }
        Delete(length);
}
void Stack :: Push(char p, int l)
{
    if(top==l)
        cout<<"Stack is full";
    else{
        top++;
        str[top] = p;
        }
}
void Stack :: Delete(int l)
{
    char strtemp[10];
    int i=0;
    for(int i =0;i<l;i++)
    {
        if(!(isalpha(str[i])))
        {
            strtemp[i] = str[i];
            i++;
        }
    }
    strtemp[i] ='\0';
    for(int i=0;i<strlen(strtemp);i++)
    {
        cout<<strtemp[i];
    }

}
int main()
{
    Stack S;
    S.Enter();

}

