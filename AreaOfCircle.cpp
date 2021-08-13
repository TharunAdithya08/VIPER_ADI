#include<iostream>
using namespace std;
float AreaOfCircle(float r)
{
    float area;
    float r1=r*r;
    area=(3.14)*r1;
    return area;
}
int main()
{
    float r,result;
    cout<<"Enter the radius of the circle:";
    cin>>r;
    result=AreaOfCircle(r);
    cout<<"The area of the circle equals="<<result;
}