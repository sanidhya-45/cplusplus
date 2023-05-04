#include <iostream>
using namespace std; 

int main() 
{ // pattern 11
    int k;
    /* 
      for (int i = 1; i <=5; i++)
    {
        k=1;
        cout << endl;
        for (int j = 1; j <=9; j++)

        {
            if (j>=6-i && j<=4+i && k)   // condition
            {
                cout << " $";
                k=0;
            }
            else
            {
                cout << "  ";
                k=1;
            }
        }
    }
    cout<<endl;*/
// pattern 12   
  // for \ & / diagonal
      for (int i = 1; i <=5; i++)
    {
        //k=0;
        cout << endl;
        for (int j = 1; j <=9; j++)

        {
            if (j>=6-i && j<=6-i)   // condition
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








return 0;
}