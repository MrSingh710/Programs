#include<iostream>
using namespace std;
class accountA;
class accountB{
    long int accno;
    string name;
    int bal;
    public:
    accountB(long int accno,string name,int bal=0){
        this->accno=accno;
        this->bal=bal;
        this->name=name;
        
    }
    void fundtransfer(accountA&,int);
    void getdetails(){
    cout<<"PNB"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Account No.:"<<accno<<endl;
        cout<<"Current Balance:"<<bal<<endl;
    }
};
class accountA{
     long int accno;
    string name;
    int bal;
    public:
    accountA(long int accno,string name,int bal=0){
        this->accno=accno;
        this->bal=bal;
        this->name=name;
        
    }
   
    void getdetails(){
        cout<<"SBI"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Account No.:"<<accno<<endl;
        cout<<"Current Balance:"<<bal<<endl;
    }
    friend void accountB::fundtransfer(accountA&,int);
};
void accountB::fundtransfer(accountA &temp,int amount){
        temp.bal+=amount;
        this->bal-=amount;
        cout<<"Fund Transfer Successful!!"<<endl;

    }
int main(){
    accountA sbi(13234,"Jaspreet");
    accountB pnb(45464,"Inderpal",5000);
    sbi.getdetails();
    pnb.getdetails();
    pnb.fundtransfer(sbi,34000);
    sbi.getdetails();
    pnb.getdetails();
    return 0;
}