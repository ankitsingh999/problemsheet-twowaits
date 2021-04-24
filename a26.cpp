#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int flag =true;

    for(int div=2;div*div<=n;div++)
    {
        if(n%div==0)
        {
            flag=false;
            break;
        }
    }
    if(flag==false)
    {
        cout<<"No. is not a Prime";
    }
    else
    {
        cout<<"No. is Prime";
    }
}


