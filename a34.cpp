#include<iostream>

using namespace std;


void primecheck(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        bool flag =true;
        for(int div =2;div*div<=i;div++)
        {
            if(i%div==0)
            {
                flag=false;
            }            
        }
        if(flag ==false)
        {
            cout<<i<<"is not Prime\n";
        }
        else
        {
            cout<<i<<"is Prime\n";
        }
    }
}
int main()
{
    int a,b;
    cout<<"\nenter any two no.s =";
    cin>>a>>b;

    primecheck(a,b);
}
