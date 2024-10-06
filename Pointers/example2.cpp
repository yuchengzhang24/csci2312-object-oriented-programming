#include <iostream> 
using namespace std; 

void arrayPrint(int *ptr){
    for (int i = 0; i < 5; i++){
        cout << "value at location " << i << " is: " << ptr[i] << endl;
    }
}

int main(){
    int myArray[5] = {10, 20, 30, 40, 50};
    arrayPrint (myArray);
}