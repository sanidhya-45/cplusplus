#include <iostream>
//         second largest element in an array
//         (works only for distinct elements)
using namespace std; 

int main() 
{
    int n,s=0,res=0;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){ cin>>a[i];}
    for(int i=0;i<n;i++)
    { 
       if(a[i]>a[res])
       {      res=i;
       }

    }
    cout<<a[res]<<endl;//  largest element
    for(int i=0;i<n;i++)
    { if(a[i]>a[s] && a[res]>a[i] && res!=i)
      {
          s=i;    
      }
    }
        cout<<a[s];// second largest element
return 0;

}