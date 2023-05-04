#include <iostream>
using namespace std; 
//        sum of nat numbers using recursion and without using recursion
int nat(float n)
{     if(n==1){ return 1;}
     if(n==0){ return 0;}

    return n + nat(n-1);
}
int nat1(float n)
{    
    return (n*(n+1))/2;
}

int main() 
{
  int a;
  cout<<" enter the no upto ehich the sum of natural nos is to be found out"<<endl;
  cin>>a;
  cout<<" the sum of natural nos. upto "<<a<<"  is"<<nat(a);
  cout<<endl;
  cout<<" the sum of natural nos.(without recur.) upto "<<a<<"  is"<<nat1(a);
  

return 0;
}