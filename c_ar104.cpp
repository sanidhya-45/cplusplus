#include <iostream>
using namespace std; 
//    program to find elements greator or smaller or
//       equal to a particular value entered
int main()
{
    int n;
    int a[n],b;
    cout<<" enter size of array"<<endl; cin>>n;
    cout<<" enter an array"<<endl;
     for(int  i=0;i<n;i++)
     {cin>>a[i];
     }
    cout<<" enter the number "<<endl;
    cin>>b;
    for(int i=0;i<n;i++)
    {
        if(a[i]>b)
        {cout<<"larger "<<a[i]<<endl;}
        else if(a[i]<b)
        { cout<<" smaller "<<a[i]<<endl;}
        else
        { cout<<"equal"<<a[i]<<endl;}
    }

return 0;
}