#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a, b;
    cout<<"\n Low limit =";
    cin>>a;
    cout<<"\n High Limit =";
    cin>>b;


    for(int i=a;i<=b;i++)
    {
        int digit=0;
        int o=i;
        while(o!=0)
        {
           int rem =o%10;
           digit=digit+pow(rem,3);
           o=o/10; 
        }
        if(digit==i)
        {
            cout<<i<<" is Armstrong\n";
        }
        else
        {
            cout<<i<<" is not Armstrong\n";
        }
    }
}