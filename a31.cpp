#include<iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;

cout<<"\n Pattern 1->\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"\t*";
        }
        cout<<endl;
    }

    cout<<"\nPattern 2->\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"\t"<<i;
        }
        cout<<endl;
    }

    cout<<"\nPattern 3->\n";
    
}