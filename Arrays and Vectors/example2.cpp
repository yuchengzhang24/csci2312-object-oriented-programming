#include <iostream>
#include <array>
#include <vector>
using namespace std; 

//Array as Class
int main(){
    //Array
    array<int, 3> arr = {1, 2, 3}; //Fixed array of 3 elements 
    cout << "array: ";
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //Vector 
    vector<int> vec = {1, 2, 3}; //Dynamic Vector Size 
    vec.push_back(4); //Adding element dynamically 
    cout << "vector: ";
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}

