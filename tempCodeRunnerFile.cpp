#include<iostream>
using namespace std;
void grade(int m);
int main()
{
    int marks;
    cout<<"Enter the number";
    cin>>marks;
    grade(marks);
} 
void grade(int m)
{
    if(m>=91 && m<=100)
    cout<<"Grade is :AA";
     else if(m>=81 && m<=90)
    cout<<"Grade is:AB";
     else if(m>=71 && m<=80)
    cout<<"Grade is :BB";
     else if(m>=61 && m<=70)
    cout<<"Grade is:BC";
     else if(m>=51 && m<=60) 
    cout<<"Grade is :CD";
     else if(m>=41 && m<=50)
    cout<<"Grade is :DD";
     else
    cout<<"Fail";
}