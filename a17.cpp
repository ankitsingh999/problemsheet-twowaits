#include<iostream>

using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    
    while(n2%n1!=0)
    {
        int rem =n2%n1;
        n2=n1;
        n1=rem;
    }
    cout<<"GCD="<<n1;
}