#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int number,i;
    cout<<"Enter the number";
    cin>>number;
    i=fact(number);
cout<<"Factorial is:"<<i;

}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return(n*fact(n-1));
    }

}
