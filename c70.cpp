#include <iostream>
using namespace std; 

int main() 
{
    // pattern 9 for upper half triangle

       for (int i = 0; i <=5; i++)
    {
        cout << endl;
        for (int j = 0; j <=8; j++)

        {
            if (j>=5-i-1 && j<=5+i-1)   // condition
            {
                cout << "  ";
            }
            else
            {
                cout << " $";
            }
        }
    }
    //cout<<endl;
    //pattern 10
           // for upsie down triangle
       // on changing dollar with blank we get different image
       for (int i = 1; i <=5; i++)
    {                                    
        cout << endl;
        for (int j = 1; j <=9; j++)

        {
            if (j>=i && j<=10-i)   // condition
            {
                cout << "  ";
            }
            else
            {
                cout << " $";
            }
        }
    }
    cout<<endl;

return 0;
}