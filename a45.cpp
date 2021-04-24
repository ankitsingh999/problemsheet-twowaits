#include<iostream>

using namespace std;


int largest(int arr,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
        }
    }
    return arr[0];
}
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
    largest(arr,size);
}