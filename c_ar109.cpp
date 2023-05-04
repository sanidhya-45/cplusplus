#include <iostream>
using namespace std; 
//      printing even and odd seperately

int main() 
{
    int n;
    int a[n];
    cout<<" enter size"<<endl; cin>>n;
    cout<<" enter an array";
    for(int i=0;i<n;i++)
    {cin>>a[i];}

    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout<<" even "<<a[i]<<endl;
        }
        else
        {
            cout<<" odd "<<a[i]<<endl;
        }
    }

  

return 0;
}