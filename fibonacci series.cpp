#include<iostream>
using namespace std;
main()
{
    int a,b,c,n;
    a=0;
    b=1;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Fibonacci series upto n is:"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    c=a+b;
    while(c<=n)
    {
        cout<<c<<endl;
        a=b;
        b=c;
        c=a+b;
    }
}