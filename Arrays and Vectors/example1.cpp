#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main(){
    //Array
    int arr[3] = {1, 2, 3}; //Fixed Size 
    cout << "Array: ";
    for (int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //Vector 
    vector<int> vec = {1, 2, 3}; //Dynamic size 
    vec.push_back(4); //Adding element
    cout << "Vector: ";
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " "; 
    }
    cout << endl;

    return 0;
}

