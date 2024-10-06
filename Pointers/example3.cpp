#include <iostream> 
using namespace std; 

void cubeByPointer(int *ptr){
    *ptr = *ptr * *ptr * *ptr;
}

int main(){
    int x = 5;
    int *ptrX = &x;

    cubeByPointer(ptrX);
    cout << "5 cubed is " << *ptrX << endl;
}