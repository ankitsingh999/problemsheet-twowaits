#include<iostream>

using namespace std;

int  fact(int n)
{
    int mul=1;
    for(int i=1;i<=n;i++)
    {
        mul=mul*i;
    }
    return mul;
}

int main()
{
    int n;
    cin>>n;
    int f=fact(n);
    cout<<f;

}