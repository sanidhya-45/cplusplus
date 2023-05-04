#include <iostream>
using namespace std;
int main()// program to generate tables in descending order
{  
     int n;
     for(int i=10;i>1;i--)                            // nested for loop 
     {   for(n=10;n>0;n--)                            //using a for loop within a for loop 
        { cout<<"\t"<<i<<"\t* "<<n<<"\t="<<i*n<<"\n"; //is called nested for loop

        }



     }

    




}
