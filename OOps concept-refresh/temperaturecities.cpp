#include<iostream>
using namespace std;
class temperature
{
private:
    int a[100][300];
    int daymax;
    int citymax;
public:
    void enter()
    {
        cout<<"Enter the maximum number of days";
        cin>>daymax;
        cout<<"Enter the city number";
        cin>>citymax;
        for(int i=0;i<citymax;i++)
        {
            cout<<"CITY NO:"<<i+1<<endl;
            for(int j=0;j<daymax;j++)
            {
                cout<<"Temperature on "<<j+1<<" day";
                cin>>a[i][j];
            }
        }
    }
    void calmax()
    {
        int sum[citymax];
        for(int i=0;i<citymax;i++)
        {
            sum[i]=0;
        }
        for(int i=0;i<citymax;i++)
        {
            for(int j=0;j<daymax;j++)
            {
             sum[i] = sum[i] + a[i][j];
            }
        }
        cout<<"AVERAGE:"
        for(int i=0;i<citymax;i++)
        {
            cout<<"Temperature on"<<i+1<<"day is"<<sum[i]/daymax;
        }
    }

};
int main()
{
    temperature t;
    t.enter();
    t.calmax();
    return 0;
}

