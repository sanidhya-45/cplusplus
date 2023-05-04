#include <iostream>
using namespace std; 
//  reversing the elements
// reversing only half elements
int main() 
{
    int a[5]={10,30,60,90,20};
  cout<<" reverse order"<<endl;
  for(int i=0;i<5;i++)
  { cout<<a[4-i]<<" ";  }
  cout<<endl;
  cout<<" reversing the elements"<<endl;
  for(int i=0;i<5;i++)
  {
      int temp=a[i];
      a[i]=a[4-i];
      a[4-i]=temp;
  }
  for(int i=0;i<5;i++)
  { cout<<a[i]<<" ";}
  cout<<endl;
  cout<<" reversing only half"<<endl;
  for(int i=0;i<2;i++)
  {   int temp=a[i];
      a[i]=a[1+i];
      a[1+i]=temp;

  }
  for(int i=0;i<5;i++)
  { cout<<a[i]<<" ";}
  

return 0;
}