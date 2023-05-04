#include <iostream>
using namespace std; 
//           practise ques - segregrate //1's on left
//       0's on right
int main() 
{
    int n; cout<<" enter size"<<endl; cin>>n;
    int a[n];cout<<" enter array"<<endl;
    for(int i=0;i<n;i++)
    { cin>>a[i];}

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(a[i]==0)
           { int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
           }
        
       /* if(a[i]==1)
        {
            int temp=a[i];
             a[i]=a[j];
            a[j]=temp;
        
        }*/
        }
        cout<<endl;
    for(int i=0;i<n;i++)
    { cout<<a[i]<<" ";}

    }

return 0;
}