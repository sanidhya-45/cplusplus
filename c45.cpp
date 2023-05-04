#include <iostream>
using namespace std; 
// to find duplicate elements in an array

int main() 
{
 int a[10],p[5];
 cout<<" enter an array";
 for (int i=0;i<10;i++)
 { cin>>a[i];}
for(int i=0;i<10;i++)
{ for (int j=i+1;j<=9;j++)
    {
        if (a[i]==a[j])
        { //p[i]=a[i];
            cout<<a[i]<<endl;

        }
        else { cout<<" ";}
    }
   
}
/* cout<<" duplicate elements";
for(int i=0;i<5;i++)
{ cout<<p[i];}
*/
return 0;
}