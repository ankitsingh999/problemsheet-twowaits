#include<iostream>

using namespace std;

int main()
{
    char p;
    
    float a,b;
    cout<<"\nenter two no.s =";
    cin>>a>>b;

cout<<"\na.Add\nb.Subtract\nc.Multiplication\nd.Dicision\n";
cout<<"\nenter your choice ";
cin>>p;
    switch(p)
    {
        case 'a': cout<<a+b;
                    break;

        case 'b':cout<<a-b;
                    break;
        
        case 'c':cout<<a*b;
                    break;

        case 'd':cout<<a/b;
                    break;
    }
}