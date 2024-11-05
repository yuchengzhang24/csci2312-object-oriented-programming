#include <iostream> 
#include <cctype> 

using namespace std; 

int main(){
  char ch; 

  cout << "Enter characters (Ctrl+D to end input): \n";

  while(true){
    ch = cin.peek();    // Peek at the next character 

    if (ch == EOF){
      break;    // Exit if end of file is reached
    }

    cin >> ch;    // Read the character 

    // Check if it's non-alphabetic 
    if (!isalpha(ch)){
      int non_alpha_value = static_cast<int>(ch);   // Convert to int (ASCII value)
      cout << "Non-alphabetic character '" << ch << "' detected (ASCII): " << non_alpha_value << ")\n";
      break;    //Exit the loop after detecting a non-alpha character 
    }

    // You can perform additional operations on alphabetic characters if needed
  }
  return 0;
}