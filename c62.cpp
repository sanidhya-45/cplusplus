#include <iostream>
using namespace std; 
//            OOPS IN C++

class shoe
{  
    private:
      float offercode;

    public:
    float pr; int sz; char na[10],co[10],ch,ch1;
    void details(float pr,int sz, char na[10],char co[10]);
     int offer( float a)
     {  int dc;
        cout<<"\n enter discount coupon code";
        cin>>dc;
         if(dc==0000)
         { offercode=a;
           int d= (0.20)*offercode;
           offercode = offercode - d;
           cout<<" \nfinal price after discount"<<offercode;
         }

         else { cout<<" discount coupon doesnt exists"<<endl;
              }
         choice();
     }   
       void choice()
       { 
         cout<<endl;
        cout<<"\ndo you want to buy ?";
        cin>>ch;
        if(ch=='y' || ch=='Y')
        { cout<<" \nthank you";}
        else 
        { cout<<" \n bye bye";}
       
     }
    
     
};
void shoe :: details(float a ,int b,char c[10],char d[10])
{
  cout<<" shoe details are \n "<<endl;
  cout<<" price entered\t\t"<<a<<endl;
  cout<<"size of shoe entered\t" <<b<<endl;
  cout<<" desired brand of shoe \t"<<c<<endl;
  cout<<"desired color of shoe \t" <<d<<endl;
  
  if( a>=2200)
  {     
       offer(a);
  }
  else { cout<<" \nno offers available for desired shoe";
  }

}

int main()
{   
    shoe brand;
 // brand.pr =2000;
  //brand.sz =8;
    cout<<" enter name of brand and color"<<endl;
  cin>>brand.na>>brand.co;

  cout<<" enter desirable price and size of shoe"<<endl;
  cin>>brand.pr>>brand.sz;



  brand.details(brand.pr,brand.sz, brand.na, brand.co);
  


   return 0; 
}