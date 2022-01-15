#include <iostream>
using namespace std;
void armstrong(int a);
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    armstrong(n);
}
void armstrong(int a)
{
    int j,sum=0,r,temp;
    for(j=1;j<=a;j++)
    {
        temp=j,sum=0;
        if(temp>0)
        {
            r=temp%10;
            sum=sum+(r*r*r);
           temp= temp/10;
        }
        if(sum==j)
        {
        cout<<"Armstrong number are:"<<endl<<j;
        }
    }
    
}

    