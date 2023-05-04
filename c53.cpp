#include <iostream>
#include <string.h>

using namespace std; 
// to convert small to capital and vice versa
//  to print their converted ascii values
int main() 
{
   char s[5];
   cout<<" enter a strimg"<<endl;
   for(int i=0;i<5;i++)
   { cin>>s[i];}

   for(int i=0;i<5;i++)
   {
      if( islower(s[i]))
      { cout<<(s[i]=s[i]-32)<<"\t";
        
      }
      else {
            cout<<(s[i]=s[i]+32)<<"\t";

      }
   }
   cout<<endl;
   for(int i=0;i<5;i++)
   {
      if( islower(s[i]))
      { cout<<tolower(s[i])<<"\t";
        
      }
      else {
            cout<<toupper(s[i])<<"\t";

      }
   }
return 0;
}