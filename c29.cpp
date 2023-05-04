#include <iostream>
#include <stdio.h>

//              read a string and calculate no of small letters and 
//              capital letters
using namespace std;
int main ()
{
    int n=-1,a=0,b=0; char c[10];
   cout<<"enter a string"; //TO PRINT A STRING
  /*  gets(c);
      puts(c);*/
   gets(c);
   
    do
   {  n=n+1;
       if(c[n]>='a'&& c[n]<='z')
       {a++;}
       if(c[n]>='A'&& c[n]<='Z')
       {b++;}
   

   }
   while (c[n]!=NULL);
   cout<<"\nsmall letters\t"<<a;
   cout<<"\ncaptial letters\t"<<b;
   cout<<"\ncharacters\t"<<n;
   


    

    

  getc;
return 0;


}