#include <iostream>
using namespace std; 

//pattern 24
int main() 
{  
     for(int i=1;i<=9;i++)
    { cout<<endl;
        for(int j=1;j<=9;j++)
        {
            if(j>=1 && j<=6-i || j>=i+4 && j<=9 && i<=5)
            {
                cout<<" @";

            }
            else if(j>=1 && j<=i-4 || j>=14-i && j<=9 && i>5)
            {
                cout<<" @";
            }
            else
            {
               cout<<"  ";
            }
        }
    } 
// pattern 25
     for(int i=1;i<=9;i++)
    { cout<<endl;
        for(int j=1;j<=9;j++)
        {
            if(j>=i && i<=1 || i>=9)
            {
                cout<<" @";

            }
            else if(j>=4 && j<=6 && i!=2 && i!=8 && i!=3 && i!=7 )
            {
                cout<<" $";
            }
            else if(j==1 || j==9 && 2<=i<=8)
            {
                cout<<" @";
            }
            else
            {
               cout<<"  ";
            }
        }
    }

return 0;
}