#include<iostream>
using namespace std;

int main()
{ int a[4][4]={{1,2,3,4}, //first bracket is for rows second is for columns
               {5,6,7,8},
               {9,10,11,12}, 
              };
               //{13,14,15,16}};
  for (int i=0;i<3;i++)
    { cout<<"\n";
     for (int j=0;j<4;j++)
     { cout<<a[i][j]<<"  ";
     }
  } 
return(0);
}