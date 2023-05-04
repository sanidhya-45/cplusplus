#include <iostream>
using namespace std; 
// average of elements in an array
int main() 
{
 int a[5],s=0;
 float av=0;
 cout<<" enter an array";
 for(int i=0;i<5;i++)
 { cin>>a[i];}
 for(int i=0;i<5;i++)
 { s=s+ a[i];}
av=s/5;
cout<<" \naverage of elements in array is\t"<<av;
return 0;
}