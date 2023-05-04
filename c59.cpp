#include <iostream>
using namespace std; 
//             USE OF INLINE FUNCTIONS


inline int sum(int a,int b,int c,int d,int e)
{
   return a+b+c+d+e;
}
inline int prod(int a,int b,int c,int d,int e)
{
  return a*b*c*d*e;
}

int main() 
{
    int a,b,c,d,e;
    cout<<" enter 5 nos."<<endl;
    cin>>a>>b>>c>>d>>e;
    cout<<" the sum  "<<sum(a,b,c,d,e);cout<<endl;
    cout<<" the product  "<<prod(a,b,c,d,e);cout<<endl;
    
return 0;
}