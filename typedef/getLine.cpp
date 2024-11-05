#include <iostream>
#include <cctype>

using namespace std; 

string getline1(){
  char ch;
  string str1 = ""; 

  while(true){
    ch = cin.peek();    // Peek at the next character

    if (ch == '\n'){
      ch = cin.get();
      break;
    }
    ch = cin.get();
    str1.push_back(ch);
  }

  return str1;
}

int main(){
  string inputString;
  while (true){
    cout << "Enter a string \n";
    inputString = getline1();
    cout << "You entered '" << inputString << "'" << endl;
  }

  return 0;
}