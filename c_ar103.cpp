#include <iostream>
using namespace std; 
//        max and min element in an array
int main() 
{
      int n;
    int r[n],a[n],m;
    cout<<" enter size"<<endl; cin>>n;
    cout<<" enter an array"<<endl;
    for(int i=0;i<n;i++)
    { cin>>r[i];}
    for(int i=0;i<n;i++)
    { a[i]=r[i];}
    for(int i=0;i<n-1;i++)
    {for(int j=i+1;j<n;j++)
     {
        if(a[i]>a[j])
        { int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
     }
    } 
    for(int i=0;i<n;i++)
    { if(r[i]==a[n-1])
         { cout<<i<<endl;}
      if(r[i]==a[0])
      { cout<<i<<endl;}
    
    }
    return 0;
}
