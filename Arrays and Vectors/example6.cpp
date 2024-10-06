#include <iostream>
#include <random>
#include <ctime> 

const int MAX_ELEMENTS = 10; 

int main(){
    int myArray[MAX_ELEMENTS];

    int initialSeed; 

    srand(time(0));

    for (int i = 0; i < MAX_ELEMENTS; i++){
        myArray[i] = rand();
    }
}