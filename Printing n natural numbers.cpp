#include<iostream>
using namespace std;
main()
{
    int n,i;
    cout<<"Enter the number upto which you want to print the natural numbers:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i==n)
        {
            cout<<i<<endl;
            break;
        }
        else
        {
            cout<<i;
            cout<<',';
        }
    }
}