#include <iostream>
using namespace std; 
// passing objects as arguements
    class complex 
    {
          private :
          int a,b;
    
         public :
          //int a1,b1,a2,b2;
         void set(void)
         {   int v1,v2;
              cout<<" enter the real an img part of complex number"<<endl;
             cin>>v1>>v2; 
             a=v1;
             b=v2;
         }
         void get(complex c1,complex c2);  
         void disp(void); 

    };



void complex :: get(complex c1,complex c2)
{
  a=c1.a+ c2.a;
  b=c1.b+ c2.b;
     
}
void complex :: disp(void)
{
   cout<<"\n the resultant complex number is\t"<<a<<" +i"<<b;
} 


int main() 
{ 
    complex o1,o2,o3;
    o1.set();
    o2.set();
   o3.get(o1,o2);
   o3.disp();


return 0;
}