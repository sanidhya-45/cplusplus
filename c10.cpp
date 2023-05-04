#include<iostream>
using namespace std;
int main()
{   int a ,n, i;  // program to find digit at ones ,tens and hundred's place
int ar[n];
    cout<<" enter no of elements in array ?";
    cin>>n;
   /* for (a=10; a<100; a=a*10)
   for (int i=10;i<100;i=i*10)
    {if ( a>=i && a<i*10)
     { cout<<" entered number is two digited number";}
     // else if ( a>=100 && a<1000)
     //{ cout<<" entered number is three digited number";}
    }
    
 */
cout<<" \nenter ur number ?";
for(i=0;i<n;i++)
{cin>>ar[i];}


cout<<"\nvalue at hundreds place"<<ar[n-3];
cout<<"\nvalue at tens place"<<ar[n-2];

cout<<"\nvalue at ones place"<<ar[n-1];





     
  return 0;  
}