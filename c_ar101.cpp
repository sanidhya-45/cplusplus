#include <iostream>
using namespace std; 
//        program to find numbers before 
//        and after a particular positon
int main() 
{
    int n;
    int ar[n],b;
    cout<<" enter size of array"<<endl; cin>>n;
    cout<<"enter an array"<<endl;
    for(int i=0;i<n;i++)
    { cin>>ar[i];}
    cout<<" enter the position "<<endl; cin>>b;
    cout<<" upto posiiton "<<b<<endl;
    for(int i=0;i<b-1;i++)
    {cout<<ar[i]<<" ";
    }
    if(b==n)
    { cout<<" no elements after "<<b;}
    cout<<"after position "<<b<<endl;
    for(int i=b;i<n;i++)
    {cout<<ar[i]<<" ";
    }
    
    




return 0;
}