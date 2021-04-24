#include<iostream>

using namespace std;

void swapit(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<","<<b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"\nVAlues before Swapping"<<a<<","<<b;
    swapit(a,b);
}