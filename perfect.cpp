#include <iostream>
using namespace std;
void perfect(int i);
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    perfect(n);
}
void perfect(int i)
{
    int j,sum=0;
    for(j=1;j<i;j++)
    {
        if(i%j==0)
        {
            sum=sum+j;
        }
    }
    if(i==sum)
    {
        cout<<"Number is perfect";
    }
    else
    {
        cout<<"Number is not perfect";
    }
}
