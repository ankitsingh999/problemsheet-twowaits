#include<iostream>

using namespace std;

int main()
{
    int size;
    cin>>size;
    int sum=0;
    int arr[size];
    cout<<"\nenter elements to array->";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];

    }
     // adding arrays;
     for(int i=0;i<size;i++)
     {
         sum+=arr[i];
     }
cout<<"\nAverage off arrays is ="<<(sum/size);
}