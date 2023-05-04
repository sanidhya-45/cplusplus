#include<iostream>
#include<math.h>
using namespace std;
int main()
{   float a,b,x,y;
    int c,e,hcf,lcm;
    cout<<" enter ur choice for the following operations to be performed\n :";
    cout<<" enter 1 for lcm of two numbers"<<"\n"<<" enter 2 for hcf for two numbers "<<"\n"<<"enter 3 for square root of a number"<<"\n"<<" enter 4 for cube root of a number \n";
    cin>>c;
    switch (c)
    { case (1):
       { cout<<" enter two numbers :";
         cin>>a>>b;
         for(e=0; e<=a && e<=b;e++ )
         { if (a/e== 0 && b/e == 0)
           { e=hcf;}
         }
          // cout<<" \n hcf of two numbers is"<<hcf;
         lcm =(a*b)/hcf;
         cout<<" \nlcm of two entered numbers is "<<lcm;
         break ;
       }
       case (2):
       {
         cout<<" enter two numbers :";
         cin>>a>>b;
         for(e=0; e<=a && e<=b;e++ )
         { if (a/e== 0 && b /e == 0)
           e=hcf;
           cout<<" \n hcf of two numbers is"<<hcf;
           break;

         
         }

       }
       case (3):
       {
         cout<<" enter a non negative number :";
         cin>>a;
         x=pow(a,0.5);
         cout<<"\n square root of the number is"<<x;
        break;
       } 
       case (4):
       {
         cout<<" enter any number :";
         cin>>b;
         y=pow(b,0.333);
         cout<<"\n cube root of number is"<<y;
         break;
       }
       default: 
       { cout<<" invalid option"; }


    }




    return 0;
}