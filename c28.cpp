#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  for(int i=0;i<5;i++)           //for rows
             {   cout<<"\n";
                  for(int j=-1;j<i;j++)  // for columns
                    { 
                      
                     cout<<"#\t";
                    }
             }

for(int i=0;i<5;i++)           //for rows
             {   cout<<"\n";
                  for(int j=4;j>i;j--)  // for columns
                    { 
                      
                     cout<<"#\t";
                    }
             }

/*for(int i=5;i>0;i--)           //for rows
             {   cout<<"\n";
                  for(int j=11;j>i;j--)  // for columns
                    { 
                      
                     cout<<"#\t";
                    }
             }*/
}