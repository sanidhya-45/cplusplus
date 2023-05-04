#include <iostream>
#include <conio.h>
#include <stdio.h>// rows and columns part 4

using namespace std;
int main()
{   int c;
    cout<<" enter ur age";
    cin>>c;
    for(int i=0;i<6;i++)
     { 
       gotoxy(i,5);
       cout<<c;
       /*  for (int j=0;j<6;j++)
         { 
            // delay(10);
             gotoxy(i,j);
             puts(s);
            

         }*/
     }
    

}
