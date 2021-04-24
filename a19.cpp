#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    while(n!=0)
    {
        int rev =n%10;
        cout<<rev;
        n=n/10;
    }
    
}