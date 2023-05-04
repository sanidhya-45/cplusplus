#include <iostream>
using namespace std; 
//           selection sort

int main() 
{
    int a[6],s;
    cout<<" enter an array"<<endl;
    for(int i=0;i<6;i++)
    {cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        s=i;
        for( int j=i+1;j<6;j++)
        {
            if(a[j]<a[s])
            { s=j;}
        }
        int temp=a[s];
        a[s]=a[i];
        a[i]=temp;
    }
    for(int i=0;i<6;i++)
    { cout<<a[i]<<" ";}

return 0;
}