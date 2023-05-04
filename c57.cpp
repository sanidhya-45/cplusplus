#include <iostream>
#include <math.h>
using namespace std; 
//             cube of number using function
int cube( float n)
{
    float c=pow(n,3);
    return c;
}
int main() 
{
    float a;
    cout<<" enter a no.";
    cin>>a;
    cout<<"\n the cube of  "<<a<<"  is  "<<cube(a);
    cout<<endl;



return 0;
}