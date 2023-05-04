#include <iostream>
using namespace std;
int main()// rows and columns and matrix 
{
  int c,a[3][3]={ 1,2,3,
                  4,5,6,
                  7,8,9,
                         };
  cout<<" enter ur choice \n 1 for i=j \n 2 for i>j\n 3 for i<j ";
  cin>>c;
  switch (c)
  { case (1):
            {for(int i=0;i<3;i++)
             { //cout<<"\n";
                  for(int j=0;j<3;j++)
                    {
                      if(i==j)
                     {cout<<a[i][j]<<"\n";}
                    }
 
             }
             break;
            } 
    case (2):
            {for(int i=0;i<3;i++)
             {
                  for(int j=0;j<3;j++)
                    {
                     if(i>j)
                     {cout<<a[i][j]<<"\n";}
                    }
 
             }
             break;
            } 
     case (3):
            {for(int i=0;i<3;i++)
             {
                  for(int j=0;j<3;j++)
                    {
                     if(i<j)
                     {cout<<a[i][j]<<"\n";}
                    }
 
             }
             break;
            }  
     default: { cout<<" andha hai kya bc";}   

  }
}