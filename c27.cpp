#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
int main()        
{  
  int a,b; float s,c;
  cout<<" enter two non negative numbers";
  cin>>a>>b;
  //textcolor (Yellow);
  if(a>b || a==b)
  { s=pow(a,0.5);
     cout<<" \nsquare root \t"<<s; 
  }
  else 
   {
    c=pow(b,0.33);
     cout<<"\n cube root \t"<<c;
   }


return 0;



}
    