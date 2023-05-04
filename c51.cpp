#include <iostream>
using namespace std; 
//   FACTORIAL OF A NUMBER USING RECURSION
int fac(int n)
{    if(n<=1)
      { return 1;
      }
    return n* fac(n-1);
}
int main() 
{
  int a;
  cout<<" enter a number"<<endl;
  cin>>a;
  cout<<" \nfactorial of "<<a<<" is"<<fac(a);

return 0;
}