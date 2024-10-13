#include <iostream> 
#include <iomanip>
#include <exception>
#include "Stock.h"
using namespace std; 

int main(){
  Stock account1("Yucheng Zhang", 1, 5, 500);

  account1.displayAccount();
  cout << endl; 
  account1.buyShares(5);
  cout << endl; 
  account1.sellShares(3);
  cout << endl; 
  account1.setOwner("Chris Tran");
  account1.setAccountNumber(2);
  account1.setNumberOfShares(6);
  account1.setPricePerShare(1000);
  account1.displayAccount();
  cout << endl; 
  account1.sellShares(8);
  cout << endl; 
  account1.buyShares(10);
  cout << endl; 
  account1.sellShares(8);
  cout<< endl; 
  account1.displayAccount();
}