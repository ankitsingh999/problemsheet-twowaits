#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int o =n; // storing original no.
    int digit=0;

    while(o!=0)
    {
        int rem =o%10;
        digit =(digit*10)+rem;
        o=o/10;
    }
    if(digit==n)
    {
        cout<<"No . is Palindrome";
    }
    else
    {
        cout<<"No. is NOT a Palindrome.";
    }
}