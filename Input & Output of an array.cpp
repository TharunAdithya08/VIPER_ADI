#include<iostream>
using namespace std;
main()
{
    int i,n;
    int a[n];
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements for the array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The elements of of the array are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<',';
    }
}