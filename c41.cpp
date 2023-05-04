#include <iostream>
using namespace std; 
//             function and function prototypes
int sum(int n1 ,int n2) ;   // function prototype or (declaration)
int main() 
{
  int a,b;
  cout<<" enter two numbers "<<endl;
  cin>>a>>b;
  cout<<"sum of numbers is"<<sum(a,b);//calling of a function

return 0;
}
int sum(int n1 ,int n2)    // defination
{                   //       of a function
    int c= n1+n2;
    return c;
}// if a func is defined after main then we use
// function prototype to call it or to actually remind
// the compiler that the func exists 