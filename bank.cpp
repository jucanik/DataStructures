#include<iostream>
using namespace std;
class bank{
    private:
    int ac_no,account;
    float balance;
    char name[20];
    public:
    void open();
    void deposite(int);
    void withdraw(int);
    void search(int);
    void display();
};
void bank::open(){
    cout<<"ENTER YOUR NAME :  ";
    cin>>name;
    cout<<"ENTER YOUR ACCOUNT NUMBER :  ";
    cin>>account;
    cout<<"ENTER THE AMOUNT OF MONEY : BDT  ";
    cin>>balance;
}
void bank::deposite(int j){
        int bnc;
        if(account==j){
        cout<<"ENTER THE AMOUNT OF MONEY : BDT ";
        cin>>bnc;
        balance=balance+bnc;
        cout<<"\n\n\tJOB HAS DONE WELL !!! \n";
    }
}
void bank::withdraw(int k){
    int blnc,p;
    if(account==k)
    {
        cout<<"YOUR CURRENT ACCOUNT BALANCE IS BDT "<<balance<<"\n"<<"THE AMOUNT OF MONEY YOU WANT TO WITHDRAW IS BDT ";
        cin>>blnc;
        p=balance-blnc;
        if(p<0)
            cout<<"SORRY !!! THERE IS NOT ENOUGH MONEY IN YOUR ACCOUNT\n";
        else if(p>=0){
            cout<<"\n\tYOUR REQUEST TO WITHDRAW MONEY HAS DONE\n\n";
            balance=p;
        }
    }
}
