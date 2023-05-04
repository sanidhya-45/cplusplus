#include <iostream>
#include <string.h>
using namespace std; 

int main()
{   char s[5];
    cout<<" enter a string"<<endl;
    for(int i=0;i<5;i++){ cin>>s[i];}
    for (int i=0;i<5;i++)
    {  if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
      {
         s.erase(remove(s.begin(), s.end()),s.end());

      }
    }
cout<<"\n"<<s;


return 0;
}