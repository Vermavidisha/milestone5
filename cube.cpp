#include<iostream>
using namespace std;
int cube(int a);
int main()
{
    int num,cal;
    cout<<"Enter the number";
    cin>>num;
    cal=cube(num);
    cout<<"Cube of the number"<<cal;
}
int cube(int a)
{
    int n;
    n=a*a*a;
    return n; 
}