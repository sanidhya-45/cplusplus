#include <iostream>
using namespace std; 
//      finding missing number in a given
//      range of numbers in order

int main() 
{
    int n;cout<<"enter size"<<endl;cin>>n;
    int a[n];
    cout<<" enter range in ascending order"<<endl;
    for(int i=0;i<n;i++)
    { cin>>a[i];}
    for(int i=0;i<n-1;i++)
    {                    
     if((a[i+1]-a[i])!=1)
      {
      cout<<" missing number "<<a[i]+1<<endl;
      }
    }


return 0;
}