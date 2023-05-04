#include <iostream>
using namespace std; 
//         PASSING AN ARRAY TO A FUNCTION
//          & FACTORIAL OF ENTERED NUMBERS 
int func(int n)
{  /*if(n<=1)
    { return 1;}
  return n*func(n-1);*/
  return n+1;
}
int main() 
{  
   int a[5]; 
   cout<<" enter an array ";
   for(int i=0;i<5;i++)
   { cin>>a[i];}
   cout<<"\n the changed array is";
   for(int i=0;i<5;i++)
   {
   cout<<endl<<func(a[i]);cout<<"\t";
   }




return 0;
}