#include <iostream>
using namespace std; 
//           practise question

int main() 
{
    int a[3][3],x=0,y=0,z=0;
    cout<<"  enter x y z coordinates"<<endl;
    for(int i=0;i<3;i++)
     { for(int j=0;j<3;j++)
         {cin>>a[i][j];}
     }
    for(int i=0;i<3;i++)
        { 
            x=x+a[i][0];
            y=y+a[i][1];
            z=z+a[i][2];
        
        }
   if(x==0 && y==0 && z==0)
     {cout<<" body is in equilibrium\n";}
 else { cout<<" non equilibrium condition";} 



return 0;
}