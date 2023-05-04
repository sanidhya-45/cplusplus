#include <iostream>
using namespace std; 

// usimg friend function in a class
class comp
{
   private:
   int a,b;
   friend comp sum(comp c1,comp c2);
   public:
   void set(int v1,int v2)
   {
       a=v1;
       b=v2;
   }
  void disp()
  {
      cout<<" the complex number is  "<<a<<" +i"<<b<<endl;    
  }

};

comp sum(comp c1,comp c2)
{  
    comp o3;
    o3.set((c1.a+c2.a),(c1.b+c2.b));
    return o3;

}

int main() 
{  
    comp o1,o2,o;
    o1.set(3,4);
    o2.set(4,5);
    o=sum(o1,o2);
    o.disp();
return 0;
}