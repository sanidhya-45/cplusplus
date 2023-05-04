#include <iostream>
using namespace std;
int main()// program for sum of first 50 even 
            // and odd numbers
{
int ch,o=0,e=0;
//char ch;
cout<<" enter ur choice ? \n \n  press 1 for sum of first 50 even natural numbers \n\n press 2 for sum for first 50 odd natural numbers";
cin>>ch;
switch (ch)
{   case (1):
    {for (int i=0;i<101;i=i+2)
      { e=e+i;}
      cout<<" sum \t"<<e;
       
       break;
    }
    case (2): 
    {for ( int i=101;i>0;i=i-2)
       {o=o+i;}
       cout<<" sum\t"<<o;
       break;
    } 
    default :
     { cout<<" muh dhoke aao";}


}    
   
}