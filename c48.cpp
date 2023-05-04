#include <iostream>
using namespace std; 
//                              2D ARRAY
int main() 
{
 int a[3][3] ,s=0,s1=0,s2=0;
 cout<<" enter a 2d array";
 for(int i=0;i<3;i++)
 {
     for(int j=0;j<3;j++)
      {
          cin>>a[i][j];
      }
 }
 for(int i=0;i<3;i++)
 {   cout<<"\n\n";
      for(int j=0;j<3;j++)
     {
         cout<<a[i][j]<<"\t";
     }
 }
cout<<endl<<" for upper traingle"<<endl;
 for(int i=0;i<3;i++)
 {   cout<<"\n\n";
      for(int j=0;j<3;j++)
     {   if(i<j)
       {
         cout<<a[i][j]<<"\t";
         s=s+a[i][j];
       }
     }
 }
 cout<<" \nsum of upper triangle is"<<s;
 cout<<endl<<" for lower traingle"<<endl;
 for(int i=0;i<3;i++)
 {   cout<<"\n\n";
      for(int j=0;j<3;j++)
     {   if(i>j)
       {
         cout<<a[i][j]<<"\t";
         s1=s1+a[i][j];
       }
     }
 }
 cout<<" \nsum of lower triangle is"<<s1;
 cout<<endl<<" trace of matrix"<<endl;
 for(int i=0;i<3;i++)
 {   cout<<"\n\n";
      for(int j=0;j<3;j++)
     {   if(i==j)
       {
         cout<<a[i][j]<<"\t";
         s2=s2+a[i][j];
       }
     }
 }
 cout<<" \nsum of diagonal elements"<<s2;
 
return 0;
}