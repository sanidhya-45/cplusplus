#include <iostream>
using namespace std; 

int main() 
{
    // pattern 13  
  //  upper half triangle
      for (int i = 1; i <=5; i++)
    {
        //k=0;
        cout << endl;
        for (int j = 1; j <=9; j++)

        {
            if (j>=1 && j<=6-i || j>=4+i && j<=9)   // condition
            {
                cout << " $";
               // k=1;
            }
            else  
            {
                cout << "  ";
               // k=0;
            }
        }
    }
    cout<<endl;
// pattern 14
// practise with numbers
for (int i = 1; i <=4; i++)
    {    int k=1;
        //k=0;
        cout << endl;
        for (int j = 1; j <=7; j++)

        {
            if (j>=5-i && j<=3+i)   // condition
            {
                cout <<" "<<k;
                j<4?k++:k--;
               // k=1;
            }
            else  
            {
                cout << "  ";
               // k=0;
            }
        }
    }
    cout<<endl;
return 0;
}