#include<iostream>

using namespace std;


int largest(int a,int b,int c)
{
    int bada;
    if(a>b && a>c)
    {
        bada =a;
    }
    else if(b>a && b>c)
    {
        bada =b;
    }
    else if(c>a && c>b)
    {
        bada =c;
    }

    return bada;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int max=largest(a,b,c);
    cout<<max;
}