#include <iostream>
using namespace std;
int main()
 {   int a,b,c;
     cout<<"enter the length of sides of a triangle ?  ";
     cin>>a>>b>>c;
     if (a == b && b == c)  
     { cout<<"the triangle formed in equilateral";
     }
     if (a==b || b==c || a==c) 
     { cout<<" the triangle formed is isoceles";
     } 
     else cout<<" the traingle formed is scalene";

 }
