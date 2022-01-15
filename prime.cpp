#include <iostream>
using namespace std;
void prime(int i);
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    prime(n);
}
void prime(int i)
{
    int p=0,j;
    for(j=1;j<=i;j++)
    {
    if(i%j==0)
    p++;
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

    