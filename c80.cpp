#include <iostream>
using namespace std; 

//pattern 23
int main() 
{
     for(int i=1;i<=5;i++)
    { cout<<endl;
        for(int j=1;j<=5;j++)
        {
            if(j>=i && i<=1 || i>=5)
            {
                cout<<" &";

            }
        
            else if(j==1 || j==5 && 2<=i<=4)
            {
                cout<<" &";
            }
            else
            {
               cout<<"  ";
            }
        }
    }

return 0;
}