#include <iostream>
using namespace std; 
//            TRANSPOSE OF A MATRIX

int main() 
{
   int a[3][3];
   cout<<" enter a 2d array";
   for(int i=0;i<3;i++)
   { for(int j=0;j<3;j++)
      { cin>>a[i][j];
      }
   
   }
   cout<<"\n original matrix";
   for(int i=0;i<3;i++)
   {  cout<<"\n\n";
    for(int j=0;j<3;j++)
      { cout<<a[i][j]<<"\t";
      }
   
   }
   cout<<"\n transpose matrix";
   for(int i=0;i<3;i++)
   {  cout<<"\n\n";
    for(int j=0;j<3;j++)
      { cout<<a[j][i]<<"\t";
      }
   
   }


return 0;
}