#include <iostream>
#include <iomanip>
#include <exception>
#include "Stock.h"

using namespace std; 

Stock::Stock(string aOwnerName, int aAccountNumber, int aNumberOfShares, double aPricePerShare){
  ownerName = aOwnerName; 
  accountNumber = aAccountNumber;
  numberOfShares = aNumberOfShares;
  pricePerShare = aPricePerShare;
}

void Stock::setOwner(string aOwnerName){
  ownerName = aOwnerName;
}

string Stock::getOwnerName(){
  return ownerName;
}

void Stock::setAccountNumber(int aAccountNumber){
  accountNumber = aAccountNumber;
}

int Stock::getAccountNumber(){
  return accountNumber;
}

void Stock::setNumberOfShares(int aNumberOfShares){
  numberOfShares = aNumberOfShares;
}

int Stock::getNumberOfShares(){
  return numberOfShares;
}

void Stock::setPricePerShare(double aPricePerShare){
  pricePerShare = aPricePerShare;
}

int Stock::getPricePerShare(){
  return pricePerShare;
}

void Stock::buyShares(int number){
  setNumberOfShares(getNumberOfShares() + number);
  cout << "You bought " << number << " shares. You now own " << getNumberOfShares() << " shares." << endl;
  cout << "The new value of your portfolio is: $" << setprecision(2) << fixed << getValueOfPortfolio() << endl;
}


void Stock::sellShares(int number){
  try{
    if (number < getNumberOfShares()){
      setNumberOfShares(getNumberOfShares() - number);
      cout << "You sold " << number << " shares. You now own " << getNumberOfShares() << " shares." << endl;
      cout << "The new value of your portfolio is: $" << setprecision(2) << fixed << getValueOfPortfolio() << endl;
    }
    else{
      throw runtime_error("Shares sold exceeds shares owned.");
    }
  }
  catch (const runtime_error& e){
    cout << "Caught exception: " << e.what() << endl;
  }
}

double Stock::getValueOfPortfolio(){
  return getNumberOfShares() * getPricePerShare();
}

void Stock::displayAccount(){
  cout << "Account Name: " << getOwnerName() << endl;
  cout << "Account Number: " << getAccountNumber() << endl; 
  cout << "Number of Shares: " << getNumberOfShares() << endl; 
  cout << "Price per Share: " << setprecision(2) << fixed << getPricePerShare() << endl; 
  cout << "Value of Portfolio: $" << setprecision(2) << fixed << getValueOfPortfolio() << endl;
} 