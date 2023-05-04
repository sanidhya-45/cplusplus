#include <iostream>
#include <string.h>

using namespace std;// PROGRAM ON STRING COMPARISON

int main()
{
 int n; char s1[40],s2[40];
 cout<<" \t\tenter a string";gets(s1);
 cout<<"\n\t enter another string";gets(s2);
 n=strcmp(s1,s2);
 if(n==0) { cout<<" \nstrings are equal";}
 if(n>0){ cout<<"\ts1 is longer than s2";}
 if(n<0) { cout<<"\ts2 is longer than s1";}

    


return 0;
}