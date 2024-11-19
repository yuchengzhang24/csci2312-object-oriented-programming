// same thing using an iterator 
#include <iostream> 
#include <vector> 
#include <iterator> // for std::istream_iterator 

using namespace std; 

int main(){
  vector<int> numbers; 

  cout << "Enter integers (Ctrl+D to end): ";

  // use istream iterator to read values into the vector 
  istream_iterator<int> start(cin), end;
  numbers.assign(start, end);

  cout << "You entered: ";
  for (int num : numbers){
    cout << num << " ";
  }
  
  return 0;
}
