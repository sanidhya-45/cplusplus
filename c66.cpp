#include <iostream>
#include <string>
//      USE OF DIFFERENT FUNCTIONS UNDER STRING HEADER FILE
using namespace std; 

int main() 
{    
    string s,c,d;
   cout<<" enter a string"<<endl;
   getline(cin,s);
    cout<<" string before"<<endl<<s;
    s.push_back('a');cout<<endl;// use to insert an element at end of string
    cout<<" string after pushback"<<endl<<s;
    s.pop_back();cout<<endl;// use to pop an element from end of string
    cout<<" after pop back"<<endl<<s;
    cout<<" length of string"<<endl<<s.length()<<endl;
     
     cout<<" enter another string"<<endl;
   getline(cin,c);
   cout<<" before swap"<<endl;
   cout<<" string 1"<<s<<endl;
   cout<<" string 2"<<c<<endl;
   swap(s,c);// or u can use s.swap(c); for swappinf of strings
   cout<<" after swap"<<endl;
   cout<<" string 1"<<s<<endl;
   cout<<" string 2"<<c<<endl;
   s.copy(d,6,0);// copy function
   cout<<d;
   
return 0;
}