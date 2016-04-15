#include<iostream>
using namespace std;
class directory
{
public:
    string fname;
    string lname;
    int number;
    void getdata()
    {
        cout<<"Firstname:";
        cin>>fname;
        cout<<"Lastname:";
        cin>>lname;
        cout<<"Phone Number:";
        cin>>number;
    }
    int sname(string name)
    {
        if((fname==name)||(lname==name))
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    void showdata()
    {
    cout<<"DETAILS:"<<endl;
    cout<<"Firstname: "<<fname<<endl;
            cout<<"Lastname: "<<lname<<endl;
            cout<<"PhoneNumber: "<<number<<endl;
    }
};
int main()
{
    directory D[20];
    string name;
    int a,n;
    cout<<"Enter N";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        D[i].getdata();
    }
    cout<<"Name to be searched:"<<endl;
    cin>>name;
    for(int i=0; i<2; i++)
    {
        a=D[i].sname(name);
        if(a==1)
        {
        D[i].showdata();
        break;
        }
    }
    if(a!=1)
        {
        cout<<"not found"<<endl;
        }
    return 0;
}
