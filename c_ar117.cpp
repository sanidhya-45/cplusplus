#include <iostream>
using namespace std;
//    intersection of two unsorted arrays

int main() 
{
    int n1,n2;
    cout<<" enter size of arrays"<<endl;cin>>n1>>n2;
    int a[n1],r[n2];
    cout<<" enter array 1"<<endl;
    for(int i=0;i<n1;i++){ cin>>a[i];}
    cout<<" enter array 2"<<endl;
    for(int i=0;i<n2;i++){ cin>>r[i];}
 cout<<" intersection"<<endl;
for(int i=0;i<max(n1,n2);i++)
{
  for(int j=0;j<min(n1,n2);j++)
   { if(a[i]==r[j])
     {
      //continue;
      cout<<a[i]<<endl;
     }
   }
}
 /* cout<<" union"<<endl;  
  for(int i=0;i<max(n1,n2);i++)
{
  for(int j=0;j<min(n1,n2);j++)
   { if(a[i]!=r[j])
     {
      //continue;
      cout<<a[i]<<" "<<r[j]<<endl;
     }
   }
}*/
  

return 0;
}