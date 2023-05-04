#include <iostream>
#include <string.h>
using namespace std; 
//           SWAP TWO STRINGS
int main() 
{
 char s[5],c[5],a[5];
 cout<<"enter 1st string";
 for(int i=0;i<5;i++){ cin>>s[i];}
 cout<<" enter 2nd string";
 for(int i=0;i<5;i++){ cin>>c[i];}
 cout<<endl;
 cout<<" before swap\n";
 cout<<" string 1\t"<<s<<endl;
 cout<<" string 2\t"<<c<<endl;
 swap(s,c);
// cout<<endl;
//for(int i=0;i<5;i++){ cout<<s[i];}
//for(int i=0;i<5;i++){ cout<<c[i];}
cout<<" after swap"<<endl;
cout<<s<<endl;
cout<<c<<endl;
 
 



 return 0;
}