#include <iostream>
using namespace std; 
//        POWER USING RECURSION
float pow( float a, float n)
{    if(n==0)
       {return 1;}
       if(n==1)
       { return a;}
       
     return a*pow(a,n-1);

}
int main() 
{
  float a,n; char ch;
  top:
  cout<<" enter the no and the power to which it should be raised (both +ve) "<<endl;
  cin>>a>>n;
  cout<<" the result is  "<<pow(a,n);
  cout<<"\n do u want to use the program again";
  cin>>ch;
  if( ch=='y'|| ch=='Y')
  {goto top ;}


return 0;
}