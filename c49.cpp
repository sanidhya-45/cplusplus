#include <iostream>
using namespace std; 
//                    ADDITION OF TWO MATRICES

int main() 
{
  int a[3][3],r[3][3];
  cout<<" enter 1st 2d array";
  for(int i=0;i<3;i++)
  { for(int j=0;j<3;j++)
      {cin>>a[i][j];}
  }
  cout<<" enter 2nd 2d array";
  for(int i=0;i<3;i++)
  {
  { for(int j=0;j<3;j++)
      {cin>>r[i][j];}
  }
  }
  
cout <<"\n\t sum of both matrix"<<endl;
//cout<<" enter 1st 2d array";
  for(int i=0;i<3;i++)
  { cout<<"\n\n";
   { for(int j=0;j<3;j++)
     { cout<<(a[i][j]+r[i][j])<<"\t";
     }
   }
  }
  


  return 0;
}