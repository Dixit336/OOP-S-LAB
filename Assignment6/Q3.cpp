#include<iostream>
using namespace std;
class Account{
    private:
    const long accountNo;
    long transId;
    string transType;
    double balance;

    static long nextTransactionID;
    public:
    Account(long accn,double b):accountNo(accn),balance(b){
        transId=0;
        transType="None";
    }
    long depositAmount(const long to,const long from,const double amount){
        if(to==accountNo){
            balance+=amount;
            transType="Credit";
            transId=++nextTransactionID;
            return transId;
        }
        return -1;
    }
    long creditamount(const long to,const long from,const double amount){
              if (from==accountNo)
              {
                balance-=amount;
                transType="Debit";
                transId=++nextTransactionID;
                return transId;
              }
              return -1;
              
    }
    void displayDetails() const {
        cout << "Account No: " <<accountNo<< endl;
        cout << "Balance: " <<balance<< endl;
        cout << "Last Transaction ID: " <<transId<< endl;
        cout << "Transaction Type: " <<transType<< endl;
    }
};
long Account::nextTransactionID=1000;
int main(){
    Account a1(101,5000);
    Account a2(102,4000);
    Account a3(103,3000);
    Account a4(104,7000);
    Account a5(105,6000);

    a1.depositAmount(101,102,1000);
    a2.creditamount(103,102,500);

    a1.displayDetails();
    a2.displayDetails();
    a3.displayDetails();
    a4.displayDetails();
    a5.displayDetails();

    return 0;
}
