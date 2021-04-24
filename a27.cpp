#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"\nenter low limit=";
    cin>>a;
    cout<<"\nenter high limit=";
    cin>>b;

    for(int i=a;i<=b;i++)
    {
        bool flag =true;

        for(int div=2;div*div<=i;div++)
        {
            if(i%div==0)
            {
                flag =false;
            }
            if(flag==false)
            {
                cout<<i<<"is  is not Prime\n";
            }
            else
            {
                cout<<i<<" is Prime\n";
            }
        }
    }
}