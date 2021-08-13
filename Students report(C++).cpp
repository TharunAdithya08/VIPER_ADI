#include<iostream>
using namespace std;
class Report
{
    private:
        int adNo;
        string fullName;
        float marks[5];
        
    public:
        void getAvg();
        void readInfo();
        void displayInfo();

};

void Report::readInfo()
{
    cout<<"----------------------------"<<endl;
    cout<<"Hello!"<<endl;
    cout<<"Enter you full name within 20 characters(Eg:John_Doe):";
    cin>>fullName;
    cout<<"Enter you admission number(4 digit no.):";
    cin>>adNo;
    if(adNo>999 && adNo<10000)
    {
        cout<<"Enter the marks for subjects:"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"Enter the marks for subject-"<<i+1<<":";
            cin>>marks[i];
        }
        cout<<"----------------------------"<<endl;
    }
    else
    {
        cout<<"Entered admission number is not valid!\nAccess denied!"<<endl;
    }
}

void Report::getAvg()
{
    cout<<"----------------------------"<<endl;
    float avg;
    avg=(marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
    cout<<"The average marks of "<<fullName<<" is:"<<avg<<endl;
    cout<<"----------------------------"<<endl;
}

void Report::displayInfo()
{
    cout<<"----------------------------"<<endl;
    cout<<"Full Name is:"<<fullName<<endl;
    cout<<"Admission No.:"<<adNo<<endl;
    cout<<"Your individual subject marks are:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<marks[i]<<"\t";
    }
    cout<<endl<<"----------------------------"<<endl;
}

int main()
{
    Report student;
    int option,j=1;
    while(j==1)
    {
        cout<<"What do you want to do:"<<endl;
        cout<<"1.Enter student's info\n2.Print average marks of the student\n3.Display student's information\n4.Exit:"<<endl;
        cin>>option;
        switch(option)
        {
            case 1: 
                student.readInfo();
                break;
            case 2:
                student.getAvg();
                break;
            case 3:
                student.displayInfo();
                break;
            default:
                j=0;
                cout<<"Take care now\nBye bye then!"<<endl;
                break;
        }
    }
}