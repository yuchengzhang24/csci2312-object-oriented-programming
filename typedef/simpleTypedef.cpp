#include <iostream>
using namespace std; 

typedef char CharType;    // Defined CharType as an alias for char 

int main(){
  CharType ch;

  // Prompt user for a character
  cout << "Enter a character: ";

  // Use get to read a single character from the input stream
  ch = cin.get();

  // Output the character back to the console with put 
  cout << "You entered: ";
  cout.put(ch);    // Use put to output the character 
  cout.put('\n');   // Output a newline character -- Single quotes means it is a single character 

  return 0;
}