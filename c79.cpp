#include <iostream>
using namespace std; 

//pattern 22
int main() 
{
     for(int i=1;i<=5;i++)
    { cout<<endl;
        for(int j=1;j<=5;j++)
        {
            if(j==i)
            {
                cout<<" &";

            }
            else if(j>=1 && j<=5 && j!=i && j!=6-i)
            {
                cout<<" #";
            }
            else if(j==6-i && j!=3 )
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