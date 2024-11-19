#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector> 

using namespace std;

int main(){
  ifstream file("data/data.txt");
  if (!file.is_open()){
    cerr << "Error opening file." << endl;
    return 1;
  }

  string line;
  int index = 0;

  while (getline(file, line)){     // loop until EOF
    if (line.empty())     // blank lines delimit each record 
      continue;

    stringstream ss(line);      // calls construtor for stringstream
    string name, university, college;
    int age, id;
    string temp; 

    // parse personal information 
    getline(ss, name, ',');       // get the name
    getline(ss, temp, ',');
    age = stoi(temp); //      convert it to a int
    getline(ss, university, ',');
    getline(ss, college, ',');
    getline(ss, temp);
    id = stoi(temp);      // helper function, distinguished by no '.'

    // print parsed info
    cout << "Person " << index + 1 << " Information:\n";    //++index also works 
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "University: " << university << "\n";
    cout << "College: " << college << "\n";
    cout << "ID: " << id << "\n";

    // parse and print earned and total points 
    float totalEarned = 0, totalPoints = 0;
    getline(file, line);
    while (!line.empty()){
      istringstream iss(line);
      string task;
      float earned = 0, total = 0;

      getline (iss, task, ',');
      getline(iss, temp, '/');
      earned = stof(temp);
      getline(iss, temp);
      total = stof(temp);

      totalEarned += earned;
      totalPoints += total;

      cout << "  Task: " << task << " , Earned Points: " << earned << " , Total Points: " << total << "\n";
      getline(file, line);
    }

    cout << "  Total Earned Points: " << totalEarned << "\n";
    cout << "  Total Points: " << totalPoints << "\n";
    cout << "---------------------------\n";

    index ++;
  }

  file.close();
  return 0;
}