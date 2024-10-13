#ifndef STOCK_H
#define STOCK_H

#include <iostream>
using namespace std; 

class Stock{
  private: 
    string ownerName; 
    int accountNumber; 
    int numberOfShares; 
    int pricePerShare;
  public: 
    Stock(string, int, int, double);
    void setOwner(string);
    string getOwnerName();
    void setAccountNumber(int);
    int getAccountNumber();
    void setNumberOfShares(int);
    int getNumberOfShares();
    void setPricePerShare(double);
    int getPricePerShare();
    void buyShares(int number); 
    void sellShares(int number);
    double getValueOfPortfolio();
    void displayAccount();
};

#endif 