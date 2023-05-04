#include <iostream>
using namespace std; 
//               reverse a string using recursion

char str ( char a[5])
{
      for(int i=4;i>=0;i--)
      { return a[i];
        
      } 
      

}
int main() 
{
    char s[5];
    cout<<" enter a string";
    for(int i=0;i<5;i++)
    { cin>>s[i];}
    cout<<" \nthe reversed string is "<<endl;
  //  for(int i=4;i>=0;i--)
     cout<<str(s); cout<<"\t";
    

return 0;
}