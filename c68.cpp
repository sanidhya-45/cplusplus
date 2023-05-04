#include <iostream>
using namespace std;
//               STAR PATTERNS CONTINUED

int main()
{
    int n;
    cout << " enter value of n";
    cin >> n;
    
    // pattern 1
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = 0; j <= i; j++)

        { cout<<"$"<<"\t";
        }
    } cout<<endl;
    // pattern 2
    for (int i = n-1; i >=0; i--)
    {
        cout << endl;
        for (int j = 0; j <=i; j++)

        { cout<<"$"<<"\t";
        }
    }cout<<endl;
    //pattern 3
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = 0; j < n; j++)

        { cout<<"$"<<"\t";
        }
    } cout<<endl;
    
    //pattern 4
    for (int i = 0; i <n; i++)
    {
        cout << endl;
        for (int j = 0; j<n;j++)

        { if(j>=n-i-1)
           { cout<<"$";}
           else { cout<<" ";}
        }
    }




    return 0;
}