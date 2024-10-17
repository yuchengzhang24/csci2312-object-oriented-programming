#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream> 
#include <exception>

using namespace std; 

class BankAccount{
  private: 
    string accountNumber;
    string ownerName;
    double balance;
    double interestRate; 
  public: 
    BankAccount();
    BankAccount(string, string, double, double);

    string getAccountNumber(); 
    string getOwnerName();
    double getBalance();
    double getInterestRate();

    void setAccountNumber(string);
    void setOwnerName(string);
    void setBalance(double);
    void setInterestRate(double);

    void deposit(double);
    void withdraw(double);
    void applyInterest();
    void displayAccount();

};

#endif