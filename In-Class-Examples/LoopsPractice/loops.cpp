#include <iostream>
#include "loops.h"
using namespace std;

int getInput(){
  int x;
  cout << "Enter the number of times you want the loop to execute: " << endl;
  cin >> x; 
  return x;
}

int getLoopType(){
  int y;
  string input;
  
  while (true){
    cout << "Enter the type of loop you'd like to iterate (For/While/DoWhile): " << endl;
    cin >> input;

      if (input == "For"){
        y=1;
        break;
      }
      else if (input == "While"){
        y=2;
        break;
      }
      else if (input == "DoWhile"){
        y=3;
        break;
      }
      else {
        cout << "Choose a Correct Option" << endl;
      }
  }
  return y;
}

int forLoop(int x){
  cout << "You chose a For Loop that iterates " << x << " times." << endl;
  cout << "The iteration values for this loop is: " << endl;
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
  cout << "You chose a While Loop that iterates " << x << " times." << endl;
  cout << "The iteration values for this loop is: " << endl;
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
  cout << "You chose a Do While Loop that iterates " << x << " times." << endl;
  cout << "The iteration values for this loop is: " << endl;
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
  int y = getLoopType();
  int choice = y;
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

