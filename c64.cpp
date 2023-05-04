#include <iostream>
#include <string>
using namespace std; 

//           ONES COMPLIMENT USING CLASS AND OBJECTS
class bin 
  {
     string s; // by default they are private 

     public :
      void check(void);
      void enter(void);
      void ones(void);
      void disp(void);

  };
void bin :: enter(void)
{
    cout<<" enter a binary number"<<endl;
    cin>>s;
    
}
void bin:: check(void)
{
   for(int i=0;i<s.length();i++)
   { if(s.at(i)!='0' && s.at(i)!='1')
      { cout<<" \nincorrect binary format";
       exit(0);}
   }
   
}
void bin :: ones(void)
{
    for(int i=0;i<s.length();i++)
   { if(s.at(i)=='0' )
      { s.at(i)='1';
      }
      else { s.at(i)='0';
      }
     
   }
   
}
void bin :: disp(void)
{
   cout<<"\nafter ones compliment"<<endl<<s;

}
int main()
{
   bin b;
   b.enter();
   b.check();
   b.ones();
   b.disp();

return 0;
}