#include <iostream>
using namespace std; 
//           max till ith element

int main() 
{
    int n,s=0,l,x;cout<<" enter size"<<endl;cin>>n;
    int a[n];cout<<" enter array"<<endl;
    for(int i=0;i<n;i++)
    { cin>>a[i];}
    cout<<" enter position"<<endl;cin>>x;
   for(int i=0;i<=x-1;i++)
   {    
      l=max(a[i],s);
       cout<<l<<" ";
       s=l;

   }

return 0;
}