#include <iostream>
#include <random>
#include <ctime>
using namespace std; 

void printArray(int *array2Print, int &elementsInArray);

const int MAX_ELEMENTS = 10;

int main(){
    int myArray[MAX_ELEMENTS];
    int numberOfElements; 
    int initialSeed; 

    srand(time(0)); //Used to seed the rand() function. All subsequent calls to rand() will use this initial seed. 

    for (int i = 0; i < MAX_ELEMENTS; i++){
        myArray[i] = rand();
        numberOfElements = i; //sets the number of elements read in.
    }

    printArray(myArray, numberOfElements); 
}

void printArray(int *array2Print, int &elementsInArray){
    for (int i = 0; i < elementsInArray; i++){
        cout << array2Print[i] << endl;
    }
}