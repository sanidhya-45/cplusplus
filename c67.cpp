#include <iostream>
using namespace std; 
//         DISPLAY DATE USING CLASS

class date 
{
   private:

   public:
   int d,m,y;
    void today(void);
    void disp(void);


};
 void date :: today(void)
 {
    cout<<" enter today's date"<<endl;cin>>d;
    cout<<" enter month"<<endl;cin>>m;
    cout<<" enter year"<<endl;cin>>y;
    disp();
 }

void date :: disp(void)
{
     if(d>=1 && d<=31 && m>=1 && m<=12 && y>=1000 && y<=9999)
     { cout<<"\n today's date is  "<<d<< "."<<m<<"."<<y;
     }
     else { cout<<" \n invalid date";
     }
}
int main() 
{ 
    date day;
    day.today();
    
return 0;
}