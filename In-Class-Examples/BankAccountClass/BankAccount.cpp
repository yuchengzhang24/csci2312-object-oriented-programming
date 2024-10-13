#include <iostream>
#include <iomanip>
#include "BankAccount.h"

using namespace std; 

BankAccount::BankAccount() : accountNumber(""), ownerName(""), balance(0.0), interestRate(0.01){

}
BankAccount::BankAccount(string aAccountNumber, string aOwnerName, double aBalance, double aInterestRate){
  accountNumber = aAccountNumber;
  ownerName = aOwnerName;
  balance = aBalance;
  interestRate = aInterestRate;
}

string BankAccount::getAccountNumber(){
  return accountNumber;
}

string BankAccount::getOwnerName(){
  return ownerName;
}

double BankAccount::getBalance(){
  return balance;
}

double BankAccount::getInterestRate(){
  return interestRate;
}

void BankAccount::setAccountNumber(string aAccountNumber){
  accountNumber = aAccountNumber;
}

void BankAccount::setOwnerName(string aOwnerName){
  ownerName = aOwnerName;
}

void BankAccount::setBalance(double aBalance){
  balance = aBalance;
}

void BankAccount::setInterestRate(double aInterestRate){
  interestRate = aInterestRate;
}

void BankAccount::deposit(double amount){
  setBalance(getBalance() + amount);
  cout << "You deposited $" << fixed << setprecision(2) << amount << endl; 
  cout << "Your new balance is $" << fixed << setprecision(2) << getBalance() << endl;
}

void BankAccount::withdraw(double amount){
  setBalance(getBalance() - amount);
  cout << "You deposited $" << fixed << setprecision(2) << amount << endl; 
  cout << "Your new balance is $" << fixed << setprecision(2) << getBalance() << endl;
}

void BankAccount::applyInterest(){
  double interest = getBalance() * (1 + interestRate);
  cout << "After interest, your new balance is $" << fixed << setprecision(2) << interest << endl;
}

void BankAccount::displayAccount(){
  cout << "Your account number is: " << getAccountNumber() << endl; 
  cout << "This account belongs to: " << getOwnerName() << endl;
  cout << "The interest rate of this account is: " << getInterestRate() << "%" << endl;
  cout << "The account balance is: " << getBalance() << <
}
