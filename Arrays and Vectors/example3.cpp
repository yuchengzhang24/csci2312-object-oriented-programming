#include <iostream>
#include <vector>
using namespace std; 

int main(){ //pop back - note it deletes element 
    vector<int> vec = {1, 2, 3, 4, 5};

    cout << "Before pop_back: ";
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl; 
    int lastElement = vec.back(); //gives last element 

    vec.pop_back(); //removes last element (5)
    cout << "After pop_back: ";
    for (int i = 0; i < vec.size(); i++){
        cout << vec [i]; 
    }
    cout << endl;

return 0;
}