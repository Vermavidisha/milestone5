#include <iostream>
using namespace std;
void armstrong(int a);
void perfect(int b);
void prime(int c);
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    armstrong(n);
    perfect(n);
    prime(n);
}
void armstrong(int a)
{
    int sum=0,r,temp;
    temp=a;
        while(temp>0)
        {
            r=temp%10;
            sum=sum+(r*r*r);
           temp= temp/10;
        }
        if(sum==a)
        {
        cout<<"Number is armstrong";
        }
        else
        {
            cout<<"Number is not armstrong";
        }
        cout<<endl;
}
void perfect(int b)
{
    int sum=0,i;
    for(i=1;i<=b;i++)
    {
        if(b%i==0)
        sum=sum+1;
    }
    if(sum==b)
    {
        cout<<"Number is perfect";
    }
    else
    {
        cout<<"Number is not perfect";
    }cout<<endl;
}
 void prime(int c)
 {
     int i,p=0;
     for(i=1;i<=c;i++)
     {
         if(c%i==0)
         p=p+1;
     }
     if(p==2)
     {
         cout<<"Number is prime";
     }
     else
     {
         cout<<"Number is not prime";
     }
 }