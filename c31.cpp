#include <iostream>
#include <string.h>

using namespace std;
            // TO REVERSE A STRING ,add,and strncat
int main()
{
  int n; char c[40], r[40],s[40];
  cout<<"enter a string";
  gets(c);   
  strrev(c);         //reverse a string
  strcpy(r,c);
  cout<<"\n"<<r;
  strcat(c,r);       // func of strcat
  cout<<"\n";
  strncat(c,r,3); // function of strncat
      
  cout<<"\n"<<c;


return 0;
}