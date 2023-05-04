// program for leap year
#include<iostream>
using namespace std;
int main()
{
    int y;
cout<<" Enter any year to check if its a leap year or not ";
cin>>y;
if (y%4==0 && y%4==0 && y%100!=0)
{ cout<<"\t\t\n it is a leap year";}
else 
{ cout<<"it is not a leap year";}

return 0;

}