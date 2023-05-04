#include <iostream>
using namespace std; 
 //           practise question
int main() 
{
    int a[6],d;
    cout<<" enter state of 6 cells"<<endl;
    for(int i=0;i<6;i++)
    {cin>>a[i];
    }
    cout<<" enter no of days"<<endl;cin>>d;
    
        if(a[0]==a[1] && a[1]==0 || a[0]!=a[1] && a[1]==0)
           { a[0]=0;}
         else if( a[0]==a[1] && a[1]==1 || a[0]==0 && a[1]==1)
         {  a[0]=1;}  
        if(a[5]==a[4] && a[4]==0 || a[5]!=a[4] && a[4]==0)
           { a[5]=0;}
         else if(a[5]==a[4] && a[4]==1 || a[5]==0 && a[4]==1) 
         { a[5]=1;}
          
      
      for(int i=2;i<4;i++)
      {
         if(a[i]==a[i-1] && a[i]==a[i+1]) 
          { a[i]=0;}
          else { a[i]=1;}
      }  
      for(int i=0;i<6;i++)
      { cout<<a[i]<<" ";}
     
    

return 0;
}