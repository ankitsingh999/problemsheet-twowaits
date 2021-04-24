#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d=sqrt( pow(b,2)-4*(a*c) );
    int root1=(-b+d)/(2*a);
    int root2=(-b-d)/(2*a);
    cout<<"\nRoots are -\n"<<root1<<"\n"<<root2;

}