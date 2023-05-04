#include <iostream>
#include <string.h>

using namespace std; 
//          STRING UPPERCASE AND LOWERCASE
int main()
 { 
 /*int p;char s[10],a[10];
  cout<<" \nenter a string";
  for(int i=0;i<11;i++)
  { cin>>s[i];               THIS IF FOR CONVERTING TO  UPPERCASS
  }                          AND THE SAME CAN BE DONE FOR
  // for(int i=0;i<11;i++)   LOWER CASE
    strupr(s);
    
for(int i=0;i<11;i++)
{ cout<<s[i];
}
    */

int p;char s[10];
cout<<" enter a string";
for(int i=0;i<10;i++)// THIS PROGRAM IS FOR
{ cin>>s[i];         // ALTERNATIVE UPPERCASE 
}                    // AND LOWERCASE ALPHABETS
 for(int i=0;i<10;i++)
 {
   
     if(i%2==0)
     {s[i]=s[i]+32;
      cout<<s[i]<<"\t";
     }
    else {cout<<s[i]<<"\t";}
    
 }   
 /*}
 for(int i=0;i<10;i++)
 { cout<<s[i]<<"\t";
 }*/




return 0;
}