#include <iostream>
#include "loops.h"
using namespace std;

int getInput(){
  int x;
  cout << "Enter the number of times you want the loop to execute: " <<endl;
  cin >> x; 
  return x;
}

int forLoop(int x){
  cout << "The iteration values for this For loop is: " << endl;
  for (int i = 0; i <= (x-1); i++){
    if (i < (x-1)){
      cout << i << ", ";
    }
    else {
      cout << i << "." << endl;
    }
  }
  return 0;
}

int whileLoop(int x){
  cout << "The iteration values for this While loop is: " << endl;
  int i = 0; 
  while (i <= (x-1)){
    if (i < (x-1)){
      cout << i << ", ";
    }
    else {
      cout << i << "." << endl;
    }
    i++;
  }
  return 0;
}

int doWhileLoop(int x){
  cout << "The iteration values for this doWhile loop is: " << endl;
  int i = 0;
  do {
    if (i < (x-1)){
      cout << i << ", ";
    }
    else {
      cout << i << "." << endl; 
    }
    i++;
  }
  while (i <= (x-1));
  return 0;
}

int main(){
  int x = getInput();
  int choice = 4;
  switch (choice){
    case 1:
      forLoop(x);
      break;
    case 2:
      whileLoop(x);
      break;
    case 3:
      doWhileLoop(x);
      break;
    default:
      cout << "Choose a Correct Option" << endl;
      break;
  }
}

