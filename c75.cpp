#include <iostream>
using namespace std; 

int main() 
{
    // pattern 17
     int k;
     for (int i = 1; i <=7; i++)
    { //  k='A';
        //k=0;
        
        cout << endl;
        for (int j = 1; j <=4; j++)

        { 
            if (j>=(k=2)-i && j<=i && i<=4)   // condition
            {
                cout <<" $";
               // j<4?k++:k--;
               // k=1;
               k++;
            }
            else if (j>=(k=5)-i && j<=8-i && i>4)
            {
                cout<<" $";
                k++;
            }
            else  
            {
                cout << "  ";
               // k=0;
            }
           
        }
    }

return 0;
}