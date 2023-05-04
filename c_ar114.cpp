#include <iostream>
using namespace std; 
//            insertion sort
int main() 
{
    int n;
    cout<<" enter size"<<endl;cin>>n;
    int a[n];
    cout<<" emter an array"<<endl;
    for(int i=0;i<n;i++)
    {cin>>a[i];}
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(a[j]<a[j-1])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
            else {break;}
        }
        cout<<" after pass "<<i<<endl;
        for(int k=0;k<n;k++)
        { cout<<a[k]<<" ";}
    }


return 0;
}