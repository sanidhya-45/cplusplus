#include <iostream>
using namespace std; 
// pattern 25
int main() 
{ 
   for(int i=1;i<=7;i++)
   { cout<<endl;
       for(int j=1;j<=7;j++)
       {
         if(j==(5-i) || j==(i+3) && i<=4)
         {
            cout<<" @";
         }
         else if(j==(i-3) || j==(11-i) && i>4)
         {
            cout<<" @";
         }
         else 
         {
             cout<<"  ";
         }
       }
   }

return 0;
}