// current way we do it 
#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> numbers;
  int value;

  cout << "Enter integers (CTrl+D to end): ";

  // use normal >> to extract values 
  while (cin >> value){
    numbers.push_back(value);
  }

  cout << "You entered: ";
  for (int num : numbers){
    cout << num << " ";
  }

  return 0;
}