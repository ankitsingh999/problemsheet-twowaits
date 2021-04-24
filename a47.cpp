#include<iostream>

using namespace std;

int main()
{
    int  arr1[10][10];
    int  arr2[10][10];
    int  arr3[10][10];

    int r,c;
    cout<<"\nenter rows and column->";
    cin>>r>>c;
//entering 1st 2d array->
cout<<"\nentering 1st array->";
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>arr1[i][j];
        }
    }
cout<<"\nentering 2nd array->";
//entering 2nd array->

    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>arr2[i][j];
        }
    }

//adding two arrays ->
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    cout<<"\nfinal ans.->\n";
    //displaying final array->
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cout<<arr3[i][j]<<"\t";
        }
        cout<<endl;
    }


}