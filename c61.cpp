#include <iostream>
using namespace std; 
//            FUNCTION OVERLOADING EXAMPLE

int func1(int a,int b)
{
     if(a>b)
                 { int s=a+b;
                 cout<<"\n their sum is"<<s;}
                 else
                  { cout<<"\n"<<a*b;}
}
int func1(int a)
{
    for(int i=1;i<11;i++)
    { 
       cout<<a<<"\tx\t"<<i<<"\t="<<a*i<<endl;
        
        cout<<endl;
    }
    
}

int main() 
{ 
   int a,b,c;
   cout<<" enter two numbers";
   cin>>a>>b;
   cout<<" \npress either 1 or 2";
   cin>>c;
   switch (c)
   {
      case(1):{ 
                 func1(a,b);
                 
                  break;
              }
      case(2):{ 
                func1(a);
                break;
                 

              }
     default :{ cout<<"you fool ya fool";
                 break;
               }
   }

return 0;
}