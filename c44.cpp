#include <iostream>
using namespace std; 
// to identify even and odd no in an arrray
int main() 
{
 int a[5];
 cout<<" enter an array";
 for (int i=0;i<5;i++)
 {cin>>a[i];}
for(int i=0;i<5;i++)
{
    if(a[i]%2==0)
    { cout<<a[i]<<"\teven"<<endl;}
     else 
     {cout<<a[i]<<"\todd"<<endl;
     }
}


return 0;
}