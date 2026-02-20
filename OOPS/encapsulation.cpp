#include<iostream>
using namespace std;

class BankAccount{
    private:
        int accountNo;
        double balance;
        string bankName;
    public:
        BankAccount(int a, double b, string bn){
            accountNo = a;
            balance = b;
            bankName = bn;
        }
    
    //getter
    double getBalance() const{
        return balance;
    }

    // Method to deposit amount
    void deposit(double amount){
        if(amount > 0){
            balance += amount;
        }else{
            cout<<"Invalid Deposit Amount..";
        }
    }
    // Method to withdraw amount
    void withdraw(double amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
        } else{
            cout<<"Invalid Withdraw Amount..";
        }
    }

    
};

int main(){
    BankAccount b(12012100, 25000, "SBI");

   cout << "Initial Balance: " << b.getBalance() << endl;

    b.deposit(50000);
    cout << "Balance After Deposit: " << b.getBalance() << endl;

    b.withdraw(2000);
    cout << "Balance After Withdraw: " << b.getBalance() << endl;
}