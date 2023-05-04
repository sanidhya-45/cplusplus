#include <iostream>
using namespace std; 

int main() 
{
     // pattern 18
     int k;
     for (int i = 1; i <=4; i++)
    { //  k='A';
        //k=0;
        k=i;
        cout << endl;
        for (int j = 1; j <=7; j++)

        { 
            if (j>=5-i && j<=3+i )   // condition
            {
                cout <<" "<<(k);
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


return 0;
}