#include <iostream>

using namespace std; 
//        TO CHECK IF A STRING IS PALINDROME OR NOT
int main()
{
    int a;char s[10];
 cout<<"enter a string";
 for(int i=0;i<10;i++)
 { cin>>s[i];}
  for(int i=0;i<10;i++)
  { 
      if(s[i]==s[10-i-1])
       { cout<<s[i]<<"\t";
         cout<<" string is palindrome"<<"\n";
       }
         //cout<<" string is palindrome"<<"\n";
       
       else
        { cout<<"string is not palindrome"<<"\n";
       }
  
       

  }



return 0;
}