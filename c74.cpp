#include <iostream>
using namespace std; 

//pattern 15
//using abcd in program pattern
int main() 
{ /* char k;
     for (int i = 1; i <=4; i++)
    {   k='A';
        //k=0;
        cout << endl;
        for (int j = 1; j <=7; j++)

        {
            if (j>=1 && j<=5-i || j>=3+i && j<=7)   // condition
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
    }*/
    cout<<endl;
  // pattern 16
     //char k;
     for (int i = 1; i <=7; i++)
    {  // k='A';
        //k=0;
        cout << endl;
        for (int j = 1; j <=7; j++)

        {
            if (j>=5-i && j<=3+i && i<=4)   // condition
            {
                cout <<" $";
              //  j<4?k++:k--;
               // k=1;
            }
            else if (j>=i-3 && j<=11-i && i>4)
            {
                cout<<" $";
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