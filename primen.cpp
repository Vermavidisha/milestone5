#include <iostream>
using namespace std;
void primen(int i);
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    primen(n);
}
void primen(int i)
{
    int p=0,j,k;
    for(j=1;j<=i;j++)
    {
        p=0;
        for(k=2;k<j/2;k++)
    {
    if(j%k==0)
    {
        p=p+1;
    break;
    }
    }
    if(p==0)
    {
        cout<<"Prime numbers are:"<<endl<<j;
    }
    }
}

    