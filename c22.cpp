#include <iostream>
using namespace std;
int main()// rows and column part 2 increasing and decreasing patterns 
{               //important to understand
 int a;
 for(int i=0;i<5;i++)           //for rows
             {   cout<<"\n";
                  for(int j=-1;j<i;j++)  // for columns
                    { 
                      
                     cout<<"#\t";
                    }
             }
// ek line leave krke output start hoga kyonki
// pehli baar mei j mei increment hi nhi hoga


return 0;
}