#include <iostream>
using namespace std;//program to check a prime number
int main()
{ 
    int c;
    cout<<" enter a number ";
    cin>>c;
    for (int i=0;i<c;i++)
    {      
        if(c/i==0)
        { cout<<" \nprime number";
        }
    
        else
             { cout<<" not a prime number";
             }
    
    }


return 0;
}