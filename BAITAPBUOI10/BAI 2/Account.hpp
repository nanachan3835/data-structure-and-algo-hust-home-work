#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
    private:
    int accountNumber;
    double balance;

    public:

    Account(int accountNumber;double balance=0.0)
    int getAccountNumber();
    double getBalance();
    void setBalance();
    void credit(double amount);
    void debit(double amount);
    void print();
}

#endif