#include <iostream>
#include <fstream> 
#include <string> 

using namespace std;

int main(){
  ifstream file ("example.txt");
  string line;

  if (!file){ // file didn't open or wasn't there
    cerr << "file didn't open where is it?" << endl;
    return 1;
  }

  while (getline(file, line)){
    cout << "'" << line << "'" << endl;
  }
  file.close();
  return 0;
}