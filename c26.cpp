#include <iostream>
#include <math.h>
//        program for sum of squares and cubes of digits of a number
using namespace std;

int main()
{ 
    int s=0,c,p,a[5];
    cout<<" enter a number";
    for(int i=0;i<5;i++)
    { cin>>a[i];
    }
     for( int i=0;i<5;i++)
     {
         s=s+pow(a[i],2)+pow(a[i],3);
        // cout<<" \n squares of digits\t"<<s;
         //return 0;
     }
     cout<<" \n sum of cubes and squares of digits\t"<<s;

  


return 0;

}