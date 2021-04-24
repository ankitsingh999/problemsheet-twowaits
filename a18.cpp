#include<iostream>

using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    int on1=n1; 
    int on2=n2;
    while(n2%n1!=0)
    {
        int rem =n2%n1;
        n2=n1;
        n1=rem;
    }
    int gcd=n2;
    int lcm =(on1*on2)/gcd;
    cout<<"LCM="<<lcm;
}