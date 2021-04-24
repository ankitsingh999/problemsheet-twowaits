#include<iostream>

using namespace std;

int main()
{
    int year;
    cin>>year;

    if(year%4==0)
    {
        cout<<"\nLEAP YEAR";
    }
    else if(year%100==0)
    {
        cout<<"\nLEAP YEAR";
    }
    else if(year%400==0)
    {
        cout<<"\nLEAP YEAR";
    }
    else 
    {
        cout<<"NOT A LEAP YEAR";
    }
}