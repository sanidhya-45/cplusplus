#include<iostream>
using namespace std;
int main()
{   float a,b,c;
    cout<<"enter any three numbers";
    cin>>a>>b>>c;
    if( a>b && a>c && b>c)
    { cout<<a<<"\t"<< "is the largest number"<<"\t"<<"and \t"<<b<<"is second largest" ;}
   else if( b>a && b>c && a>c)
    { cout<<b<<"\t"<< "is the largest number"<<"\t"<<"and"<<a<<"is second largest" ;}
    else
    { cout<<c<<"\t"<< "is the largest number";/*<<"\t"<<"and"<<b<<"is second largest";*/
    }



return 0;
 }
