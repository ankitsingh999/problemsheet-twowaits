#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int o=n;
    int digit=0;
    while(o!=0)
    {
        int rem =o%10;
        digit=digit+pow(rem,3);
        o=o/10;
    }
    if(digit==n)
    {
        cout<<"\n No. is Armstrong";
    }
    else
    {
        cout<<"\n Not Armstrong";
    }
}