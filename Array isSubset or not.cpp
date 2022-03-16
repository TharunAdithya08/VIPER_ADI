#include<iostream>
using namespace std;

void isSubset(int arr1[],int arr2[],int size1,int size2)
{
    cout<<"Main Array: [";
    for(int i=0;i<size1;i++)
        cout<<arr1[i]<<",";
    cout<<"]"<<endl;  
    
    cout<<"Sub Array: [";
    for(int i=0;i<size2;i++)
        cout<<arr2[i]<<",";
    cout<<"]"<<endl;
    
    int count=0;
    for(int i=0;i<size2;i++)
    {
        for(int j=0;j<size1;j++)
        {
            if(arr2[i]==arr1[j])
                count++;
        }
    }
    
    if(count>=size2)
        cout<<"Yes the array is a subset of the main array"<<endl;
    else
        cout<<"No the array is not a subset of the main array"<<endl;
}

int main()
{
    int size1,size2;
    cout<<"Enter the size of main array:";
    cin>>size1;
    int arr1[size1];
    cout<<"Enter the elements in the array:";
    for(int i=0;i<size1;i++)
        cin>>arr1[i];
        
    cout<<"Enter the size of sub array:";
    cin>>size2;
    int arr2[size2];
    cout<<"Enter the elements in the array:";
    for(int i=0;i<size2;i++)
        cin>>arr2[i];
    isSubset(arr1,arr2,size1,size2);
    
    return 0;
}