#include <iostream>
using namespace std; 
//      mean and median of an array

int main() 
{
  int n;
  cout<<" enter size"<<endl; cin>>n;
  float a[n],s=0; int m,s1=0;
  cout<<" enter an array"<<endl;
  for(int i=0;i<n;i++)
  { cin>>a[i];}
  for(int i=0;i<n-1;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          if(a[i]>a[j])
          { int temp=a[i];
          a[i]=a[j];
          a[j]=temp;
          }
          else {}
      } 
  }
  
for(int i=0;i<n;i++)
{ s=s+a[i];}
cout<<" mean is "<<float(s/n);
  cout<<endl;
  if(n%2==0)
    { 
      m=((n/2)+((n/2)+1))/2;
      s1=(a[m-1]+a[m])/2;
      cout<<"median"<<" "<<s1<<endl;
      
    }
   else if(n%2!=0)
   {
       m=(n+1)/2;
        cout<<" median is "<<a[m-1]<<endl;
 
   }   
return 0;
}