#include <iostream>
using namespace std; 
//            STRUCTURE UNIONS AND ENUMS
 typedef struct fruits
    { int price;
      char color;// the condiitond can be used by manyother struct variables
      float bc;

    }ep;
union money
{
    int rice;
    char growth;
    float eco;

};

int main()                    // also structure can be defined 
{    /*  ep mango;   // typedef and ep
     mango.price=60;
     mango.color='g';
     mango.bc= 12.1;

    cout<<mango.price<<endl;
    cout<<mango.color<<endl;
    cout<<mango.bc<<endl;*/
  union money m1;
   m1.rice=4;
   cout<<m1.rice;
   

//             0     1   2  
// enum (breakfast,lunch,dinner)
 //enum m1;
  // cout<<m1.breakfast;    this will print value of breakfast as 0 

// enum pehle se hi vaues dedega mtln program ki esiness 
//ke liye use kr lete hai apan

// union is basically used to share memory between variables  




return 0;
}