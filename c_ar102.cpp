#include <iostream>
using namespace std; 
//     program for insertion of an element in an array
//      at required position
  void func(int a[],int n, int x, int cap,int p) 
  {    
      if(n==cap)
      { cout<<" notposiible to insert";}
      int idx=p-1;
      for(int i=n-1;i>=idx;i--)
      {
          a[i+1]=a[i];
      }
      a[idx]=x;

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<"  ";
    }
}
int main() 
{
    int n;int a[n],x,p,cap=5;
    cout<<" enter the size of array";
     cin>>n;
     cout<<endl;
    cout<<" enterthe array"<<endl;
    for(int i=0;i<n;i++)
    { cin>>a[i];}
    cout<<"enter the elemnent and its position"<<endl;
    cin>>x>>p;
     func(a,n,x,cap,p);

     return 0;
}
                           /*for(int i=0;i<5;i++)
                           { 
                                  if(a[i]==NULL)
          for                        {
           adding                    a[i]==x;
      element                        }
          at                                    
             last                                                        cout<<" the new array is "<<endl;


    /*int n,fac=1;
     cout<<" enter a number"<<endl;
     cin>>n;
     if(n<0){ cout<<" invalid"<<endl;}
     else if(n==0){ cout<<" fac is"<<fac<<endl;}
     else if(n>0)
     {
         for(int i=1;i<=n;i++)
         {
             fac=fac*i;
         }
        cout<<" fac is"<<fac<<endl;
     }
*/