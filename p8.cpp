#include<iostream>

using namespace std;

int main()
{
    int size;
    cout<<"enter size of array=";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        cout<<endl;
    }
    int num;
    cout<<"enter element to be searched=";
    cin>>num;
    int low=0,high=size-1;
    int mid =(low+high)/2;

    while(low<=high)
    {
        if(arr[mid]==num)
        {
            cout<<"element found at pos"<<mid+1;
        }
        else if(num<arr[mid])
        {
            low=mid-1;
        }
        else if(num>arr[mid])
        {
            high=mid+1;
        }
        cout<<"element not found";
    }
    
}


        
