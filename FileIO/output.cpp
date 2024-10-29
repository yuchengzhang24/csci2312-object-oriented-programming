#include <iostream>
#include <fstream> 
#include <string> 

using namespace std;

int main(){
  ofstream file ("output.txt");
  if (!file){
    cerr << "can't open file" << endl; 
    return 1;
  }

  file << "Hello world" << endl;
  file << "how are you today";
  file << "I am fine";
  file.close();
  return 0;

}
