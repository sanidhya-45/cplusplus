#include <iostream>
#include <conio.h>
#include <stdio.h>
// program for palindrome

// 1. remember about input of an array
// 2 . how to avoid multiple output during if condition 
// by return statement
// 3. many ways to a particular , think of them
// : )
//
using namespace std;// palindrome
int main()
{  int a[5];
    cout<<" enter a 5 digit number";          
   for (int i=0;i<5;i++)                          // remember this 
       { cin>>a[i];                               //   input of an array
       }
   for(int i=0;i<5;i++)
    { if(a[i]!=a[5-i-1])
      { cout<<" number isnt a palindrome";
      return 0;
      }                            // point to be remembered

     else 
      { cout<<" a palindrome ";
       return 0;
      }  

    }
 


return 0;
}