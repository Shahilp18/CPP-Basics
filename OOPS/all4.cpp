#include<iostream>
using namespace std;

// ABSTRACTION
class BankAccount {
protected:
    double balance;

public:
    BankAccount(double b) : balance(b) {}

    // Pure virtual function (Abstraction)
    virtual void calculateInterest() = 0;

    void deposit(double amount) {
        if(amount > 0)
            balance += amount;
    }

    void showBalance() const {
        cout << "Balance: " << balance << endl;
    }

    virtual ~BankAccount() {}
};

// INHERITANCE
class SavingsAccount : public BankAccount {
public:
    SavingsAccount(double b) : BankAccount(b) {}

    // POLYMORPHISM (Override)
    void calculateInterest() override {
        balance += balance * 0.05;   // 5% interest
        cout << "Savings Interest Added\n";
    }
};

class CurrentAccount : public BankAccount {
public:
    CurrentAccount(double b) : BankAccount(b) {}

    void calculateInterest() override {
        cout << "No interest for Current Account\n";
    }
};

int main() {

    // POLYMORPHISM (Runtime)
    BankAccount* acc1 = new SavingsAccount(10000);
    BankAccount* acc2 = new CurrentAccount(10000);

    acc1->calculateInterest();
    acc1->showBalance();

    acc2->calculateInterest();
    acc2->showBalance();

    delete acc1;
    delete acc2;

    return 0;
}