#include <iostream>
using namespace std; 
//                  PASS AN ARRAY TO A FUNCTION USING CLASS


class array
{  
    private:
     void add(void)
     {
         cout<<" \nthe updated array is"<<endl;
         for(int i=0;i<5;i++)
         {
             cout<<a[i]+1<<"\t";
         }
     }

    public:
    int a[5];
     void getar(void);
     void setar(void);

};
void array :: getar(void)
{
   cout<<" enter an array"<<endl;
   for(int i=0;i<5;i++)
   { cin>>a[i];
   }

}
void array :: setar(void)
{
  cout<<" \nreversed array is"<<endl;
  for(int i=4;i>=0;i--)
  { cout<<a[i]<<"\t";
  }

add();
}

int main() 
{
    array ar;
    ar.getar();
    ar.setar();

return 0;
}