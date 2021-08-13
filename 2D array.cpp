#include<iostream>
using namespace std;
main ()
{
  int rowsize,colsize,i,j;
  cout<<"Enter the number of rows and columns you want in the 2D array respectively:";
  cin>>rowsize;
  cin>>colsize;
  int arr[rowsize][colsize];
  cout<<"Enter the values to be stored in the 2D array:"<<endl;
  for(i=0;i<rowsize;i++)
  {
      for(j=0;j<colsize;j++)
      {
          cin>>arr[i][j];
      }
  }
  cout<<"The values stored in the 2D array are:"<<endl;
    for(i=0;i<rowsize;i++)
  {
      for(j=0;j<colsize;j++)
      {
          cout<<arr[i][j]<<',';
      }
      cout<<endl;
  }
}