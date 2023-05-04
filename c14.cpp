#include <iostream>
using namespace std;
int main()//program for finding factorial of a number
{  
   int a, s,n;    
   cout<<" enter a non negative number : \n";
   cin>>n;
     for( a=1;a<=n;a++)
   {      for (int i=0;i<n;i++)
      { s=(n-i);
        a=a*s;
        
      //  cout<<" factorial "<<a<<"\n";  
      }
    
    cout<<" factorial \n"<<a;                
   } 

  //cout<<" factorial \n"<<a;
   





}