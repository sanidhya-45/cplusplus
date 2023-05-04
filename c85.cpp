#include <iostream>
using namespace std; 

// swap numbers using friend functions
class Y;
class X
{  private:
      int n1;
      public:
      void indata( int n)
      {
          n1=n;
      } 
   friend void swap(X &,Y &);
   friend int add(X,Y);
   void disp(void)
   {
        cout<< n1 <<endl;
   }

};
class Y
{
      private:
      int n2;
      public:
      void indata( int n)
      {
          n2=n;
      } 
   friend void swap(X &,Y &);
   friend int add(X,Y);
      void disp(void)
   {
        cout<< n2 <<endl;
   }
};
void swap( X & x, Y & y)
{
    int temp= x.n1;
    x.n1=y.n2;
    y.n2= temp;
    
}
int add ( X x, Y y)
{
   return (x.n1+y.n2);

}
int main() 
{ 
    X x1;
    Y y1;
    x1.indata(3);
    y1.indata(4);

    swap(x1, y1);  
    cout<<" the value of x1 and y1 after swapping are"<<endl;
    x1.disp();
    y1.disp();
    cout<<" the addition gives "<<add(x1,y1);

return 0;
}