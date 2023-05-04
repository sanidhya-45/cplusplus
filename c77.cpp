#include <iostream>
using namespace std; 

//pattern 19
int main() 
{   int k,n=7;
  /*  for(int i=1;i<=7;i++)
   {     k=7-i;
        cout<<endl;n--;
        for(int j=1;j<=7;j++)
        {  
          if( j<=8-i)
           { cout<<" "<<k;
              k--;
           }
           else 
           {
               cout<<"  ";
           }
        }
    } */
// pattern 20
    for(int i=1;i<=9;i++)
   {    // k=7-i;
            k=1;
        cout<<endl;n--;
        for(int j=1;j<=5;j++)
        { 
          if( j>=6-i && j<=5 && i<=4)
           { cout<<" "<<k;
              j<5?k++:k--;
              
           }
           else if( j>=i-4 && j<=5 && i>4)
           {
               cout<<" "<<k;
               j<5?k++:k--;
           }
           else
           {
               cout<<"  ";
           }
        }
    }

return 0;
}