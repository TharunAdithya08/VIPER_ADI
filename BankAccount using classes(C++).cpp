#include<iostream>
using namespace std;
int main();
class bankAccount
{
    public:
    long int accNo;
    string fullName;
    string accType;
    double balance;
    void createAcc();
    void deposit();
    void withdraw();
    void display();
};
void bankAccount::createAcc()
{
    cout<<"----------------------------"<<endl;
    bankAccount fname;
    cout<<"Enter your full name with underscore(eg:John_Dale):";
    cin>>fullName;
    cout<<"Enter your account number:";
    cin>>accNo;
    cout<<"Enter your account type:";
    cin>>accType;
    cout<<"Enter the initial deposit amount:";
    cin>>balance;
    cout<<"----------------------------"<<endl;
}

void bankAccount::deposit()
{
    cout<<"----------------------------"<<endl;
    double depoAmount;
    cout<<"Enter the amount to be deposited:";
    cin>>depoAmount;
    balance+=depoAmount;
    cout<<depoAmount<<" has been deposited!"<<endl;
    cout<<"----------------------------"<<endl;
}

void bankAccount::withdraw()
{
    cout<<"----------------------------"<<endl;
    double withdrawAmount;
    cout<<"Enter the amount to be withdrawn:";
    cin>>withdrawAmount;
    if(withdrawAmount>balance)
        cout<<"Insufficient balance!"<<endl;
    else
    {
        cout<<withdrawAmount<<" has been withdrawn!"<<endl;
        balance-=withdrawAmount;
    }
    cout<<"----------------------------"<<endl;
}

void bankAccount::display()
{
    cout<<"----------------------------"<<endl;
    cout<<"Full name:"<<fullName<<endl;
    cout<<"Account number:"<<accNo<<endl;
    cout<<"Account type:"<<accType<<endl;
    cout<<"Balance amount in account is:"<<balance<<endl;
    cout<<"----------------------------"<<endl;
}

void driverFunc()
{
    bankAccount obj1;
    int option,i=1;
    while(i==1)
    {
        cout<<"What do you want to do:\n1.Create account\n2.Deposit money\n3.Withdraw money\n4.Display account details\n5.Exit:"<<endl;
        cin>>option;
        switch(option)
        {
            case 1:
                obj1.createAcc();
                break;
            case 2:
                obj1.deposit();
                break;
            case 3:
                obj1.withdraw();
                break;
            case 4:
                obj1.display();
                break;
            case 5:
                cout<<"Thank you!"<<endl;
                i=0;
                break;
            default:
                cout<<"Out of bounds!"<<endl;
                break;
        }
    }
}
int main()
{
    int option2;
    cout<<"Confirm->want to access bank:1.Yes/2.No:";
    cin>>option2;
    switch(option2)
    {
        case 1:
            driverFunc();
            break;
        case 2:
            cout<<"Thank you visit again";
            break;
        default:
            cout<<"Thank you visit again";
            break;
    }
}