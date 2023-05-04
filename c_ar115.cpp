#include <iostream>
using namespace std; 
//    max and min element in an array 3rd approach
int main() 
{
    int n; cout<<" enter size"<<endl;
    cin>>n;
    int a[n];cout<<" enter array"<<endl;
    for(int i=0;i<n;i++)
    { cin>>a[i];}
    int res2=0,res1=0;
    for(int i=0;i<n;i++)
    { 
        if(a[i]>a[res1])
        { res1=i;}
    }
    cout<<res1<<endl;
     for(int i=0;i<n;i++)
    { 
        if(a[i]<a[res2])
        { res2=i;}
    }
    cout<<res2<<endl;
   

return 0;
}