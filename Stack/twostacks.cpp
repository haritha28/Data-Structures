#include<iostream>
using namespace std;
class mystack
{
private:
    int arr[100],top,top2,size;
public:
    mystack()
    {
        top = -1;
        top2 = 100;
        size = 100;
    }
    void push(int x)
    {
        if(top >= top2)
        {
            cout<<"overflow";
        }
        else
        {
            top = top+1;
            arr[top]=x;
        }
    }

    int pop()
    {
        if(top == -1)
        {
            cout<<"underflow";
        }
        else
        {
            int item =arr[top];
            top--;
            return item;
        }
    }

    void push2(int x)
    {
        if(top2 <= top)
        {
            cout<<"overflow";
        }
        else
        {
            top2 = top2-1;
            arr[top2]=x;
        }
    }

    int pop2()
    {
        if(top2 == 100)
        {
            cout<<"underflow";
        }
        else
        {
            int item =arr[top2];
            top2++;
            return item;
        }
    }
    int istop()
    {
        return top;
    }
    int istop2()
    {
        return top2;
    }
};

int main()
{
    mystack m;
    m.push(5);
    m.push(8);
    m.push(10);
    m.push(19);

    m.push2(15);
    m.push2(78);
    m.push2(20);
    m.push2(12);
    cout<<"elemet poped : "<<m.pop()<<endl;
    cout<<"elemet poped : "<<m.pop2()<<endl;
}
