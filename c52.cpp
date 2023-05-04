#include <iostream>
using namespace std; 
//            FIBONACCI SERIES USING RECURSION
int fib(int n)
{ 
      if(n<2)
      { return 1;
      }
      return fib(n-1)+ fib(n-2);

}
int main()
{
 int a;
 cout<<" enter the position for fibonacci series";
 cin>>a;
 cout<<" the fibonacci for position "<<a<<"  is "<<fib(a);


return 0;
}