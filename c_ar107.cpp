#include <iostream>
using namespace std; 
//    getting ith element and updating ith element

int main() 
{
    int n;
   int a[n],p,u,x;
   cout<<" enter size"<<endl;cin>>n;
   cout<<" enter array"<<endl;
   for(int i=0;i<n;i++)
   { cin>>a[i];
   }
   cout<<" enter pos of element u want"<<endl;cin>>p;
   cout<<" enter pos of element and the new element u want to update"
       <<endl;
   cin>>u>>x;
   for(int i=0;i<n;i++)
   {
       if(p!=u)
       {
           if(i==p-1)
           { cout<<a[i]<<endl;}
              if(i==u-1)
              { a[i]=x;
                   cout<<a[i];
              }
       }
       else{
          // cout<<" before updation"<<a[u-1];
           for(int i=0;i<n;i++)
           { if(i==u-1)
             {a[i]=x;
              }
             }
       }
   }
for(int i=0;i<n;i++)
{ cout<<a[i]<<" ";}
return 0;
}