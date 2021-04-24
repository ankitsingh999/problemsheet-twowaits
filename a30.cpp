#include<iostream>

using  namespace std;

int main()
{

    int n;
    cin>>n;
cout<<"\n Factors are ->";
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"\t"<<i;
        }
    }
}