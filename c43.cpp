#include <iostream>
using namespace std; 
// sort an array in ascending or descending order
// and to find largest and smaller number
int main() 
{ 
 int a[5];
cout<<"enter an array of 5 nos.";
for(int i=0;i<5;i++)
{ cin>>a[i];}
for(int i=0;i<5;i++)
{ for (int j=i+1;j<=4;j++)
    {
        if (a[i]<a[j])
        { int temp=a[i];
           a[i]=a[j];
           a[j]=temp;
           }
    }
   
}


for(int i=0;i<5;i++)
{ cout<<a[i]<<"\t";}
cout<<"\n largest no.\t"<<a[0];
cout<<"\n smallest no.\t"<<a[4];


return 0;
}