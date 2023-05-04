#include <iostream>
using namespace std; 
//         max and min 2nd approach
int main() 
{
  int a[5]={10,90,40,50,60},p;
   for(int i=0;i<5;i++)
   {
       bool flag =true;
       for(int j=0;j<5;j++)
       {
           if(a[j]>a[i])
           { flag =false;
           break;}
       }
       if(flag==true)
        { cout<<i<<endl;}
   }

return 0;
}
    /*
    // flop idea
    int a[5]={10,20,45,21,1},r[5],s[5],p[5],b[5];
    for(int i=0;i<4;i++)
    { 
        r[i]=max(a[i],a[i+1]);
    }
    for(int i=0;i<3;i++)
    {
        s[i]=max(r[i],r[i+1]);
    }
    for(int i=0;i<2;i++)
    { p[i]=max(s[i],s[i+1]);
    
    }
    for(int i=0;i<1;i++)
    {
        b[i]=max(p[i],p[i+1]);
    }
for(int i=0;i<1;i++)
{ cout<<b[i]<<" ";}
*/
