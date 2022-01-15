#include <iostream> 
using namespace std;
float dia(float i);
float cir(float j);
float area(float k);
int main()
{
    float n,a,b,c;
    cout<<"Enter the radius";
    cin>>n;
    a=dia(n);
    b=cir(n);
    c=area(n);
    cout<<"Diamter is:"<<a;
    cout<<"Circumference is:"<<b;
    cout<<"Area is:"<<c;
}
float dia(float i)
{
    float m;
    m=2*i;
    return m;
}
float cir(float j)
{
    float l;
    l=2*3.14*j;
    return l;
}
float area(float k)
{
float g;
g=3.14*k*k;
return g;
}

