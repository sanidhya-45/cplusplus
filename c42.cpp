#include <iostream>
using namespace std; 
// BASICS OF AN ARRAY
void swap(int &a,int &b)
{ int temp=a;
   a=b;
   b=temp;

}

int main() 
{ 
 int a[6],s=0;  
 cout<<" enter 6 numbers ";
for(int i=0;i<6;i++)
{cin>>a[i];}
/*for(int i=0;i<6;i++)
{cin>>a[i];}cout<<"\n reversed array"<<endl;
for(int i=4;i>-1;i--)
{ cout<<a[i]<<"\t";
  s=s+a[i];
}
cout<<"\n sum of array"<<s;    */
for(int i=0;i<6;i++)
{ swap(a[i],a[i+1]);
}
for(int i=0;i<6;i++)
{cout<<a[i];
 cout<<a[i+1]<<endl;}


return 0;
}