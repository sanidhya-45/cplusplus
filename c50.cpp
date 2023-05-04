#include <iostream>
#include <time.h>
using namespace std; 
//      to generate random numbers using rand function
int main() 
{
  srand(time(0));
 for(int i=0;i<4;i++)
 { cout<<rand()<<endl;
 
 }


return 0;
}