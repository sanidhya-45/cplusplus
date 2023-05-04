#include <iostream>
using namespace std; 

int main()
{
 char s[10],c[5],a[5];
 cout<<" enter a string";
 for(int i=0;i<10;i++)
 { 
     if(i%2==0) {cin>>c[i];}
 }
 for(int i=0;i<10;i++)
 { 
      if(i%2!=0) { cin>>a[i];}
 }
 
for(int i=0;i<10;i++)
 {
     if(i%2==0){ cout<<c[i];}
 }
 cout<<"\n";
 for(int i=0;i<10;i++)
 { if(i%2!=0) {cout<<a[i];}
 }

return 0;
}