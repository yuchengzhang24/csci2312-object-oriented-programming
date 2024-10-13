#include <iostream>
#include <array>
#include <algorithm> //for std::copy
using namespace std;

int main(){
    //Define and initialize the source Array
    array<int, 5> sourceArray = {1, 2, 3, 4, 5};

    //Method 1: Direct Assginment 
    array<int, 5> destArray = sourceArray; //Copy the entire source array

    //Method 2: Using std::copy
    array<int, 5> destArray2; 
    copy(sourceArray.begin(), sourceArray.end(), destArray2.begin());

    //Print to confirm copy 
    cout << "destArray: ";
    for (const auto& elem : destArray){
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}