#include <iostream>
#include <string.h>
//      TO CALCULATE VOWELS DIGITS CONSONANTS SPACES IN A STRING
using namespace std;
int main()
{
  int n=-1,v1=0,v2=0,v3=0,v4=0; char s[40];
  cout<<" enter a string";
  gets(s);
  do
  { n++;
    if(s[n]=='a' || s[n]=='A' || s[n]=='o' || s[n]=='O' ||s[n]=='e' || s[n]=='E'|| s[n]=='i' || s[n]=='I' || s[n]=='u' || s[n]=='U' )
     { v1++;}
    if( s[n]>=0 && s[n]<=9) { v2++;}
    if(s[n]='32'){v3++;}    
    if(s[n]!='a' || s[n]!='A' || s[n]!='o' || s[n]!='O ' ||s[n]!='e' || s[n]!='E'|| s[n]!='i' || s[n]!='I' || s[n]!='u' || s[n]!='U' )
     { v4++;}
     
      
  } while (s[n]!=NULL);
  cout<<"\nvowels"<<v1;
  cout<<"\n digits"<<v2;
  cout<<"\n space bar"<<v3;
  cout<<" \nconsonants"<<v4;

  return 0;
  



}