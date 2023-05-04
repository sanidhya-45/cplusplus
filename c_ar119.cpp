#include <iostream>
using namespace std; 

int main() 
{
    int m,c,b;
    int n;cout<<" enter size"<<endl;cin>>n;
    int a[n];cout<<" enter an array"<<endl;
    for(int i=0;i<n;i++)
    { cin>>a[i];}
    for(int i=1;i<n-1;i++)
    { m=0;
        for(int j=i+1;j<n;j++)
       {
         if(a[i-1]-a[j-1]<a[i]-a[j])
          { c=i;b=j;}
       }
    }
   cout<<a[c]<<" "<<a[b]<<endl;

return 0;
}