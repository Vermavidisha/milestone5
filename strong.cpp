#include <iostream>
using namespace std;
void strong(int i);
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    strong(n);
}
void strong(int i)
{
    int j,sum=0,m,rem,fact=1;
    m=i;
    while(m!=0)    
    {
        rem=m%10;
        for(j=1;j<=rem;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
        fact=1;
        m=m/10;
    }
    if(sum==i)
    {
        cout<<"Number is strong number";
    }
    else
    {
        cout<<"Number is not strong number";
    }
}
