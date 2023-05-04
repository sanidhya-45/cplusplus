#include <iostream>
using namespace std; 
//    left rotation of element by k times
int main() 
{
    int m;
    int n;cout<<" enter size"<<endl;cin>>n;
    int a[n];cout<<" enter array"<<endl;
    for(int i=0;i<n;i++)
    { cin>>a[i];
    }
    cout<<" enter no of time"<<endl;cin>>m;
    while(m>0)
    {
        int temp=a[n-1];
        a[n-1]=a[0];
        a[0]=temp;
    for(int i=0;i<n-2;i++)
    {
        int temp =a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    m--;
    }
    for(int i=0;i<n;i++)
    { cout<<a[i]<<" ";}
       cout<<endl;
return 0;
}