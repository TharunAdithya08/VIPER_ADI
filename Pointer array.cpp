#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of values in array:";
    cin>>n;
    int *ptr[n];
    int arr[n];
    cout<<"Enter the "<<n<<" elements to store in the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        ptr[i] = &arr[i];
    }
    cout<<"Values in the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\nAddress of the values are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ptr[i]<<"\t";
    }
    cout<<"\nAccessing the values in the array using pointers:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*ptr[i]<<"\t";
    }
}
