#include <iostream>
using namespace std; 
//    shifting & deletion of an element in an array

int main() 
{
    int p,n;
    cout<<" enter size"<<endl;cin>>n;
    int a[n];
    cout<<" enter the array"<<endl;
    for(int i=0;i<n;i++)
    { cin>>a[i];}
    cout<<" enter the position "<<endl;
    cin>>p;
    int idx=p-1;
    for(int i=idx;i<n-1;i++)
    {
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    //a[4]=0;
    
    for(int i=0;i<n-1;i++)
    { cout<<a[i]<<" ";}

return 0;
}