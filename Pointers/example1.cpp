#include <iostream> 

using namespace std; 

int main(){
    int y = 42;
    int x = 5;
    int *ptr2Y; 

    ptr2Y = &y;
    cout << "address of x is: " << &x << endl; 
    cout << "address of y is: " << &y << endl; //notice how the address of y is 4 bytes in memory away from the address of x, an int is 4 bytes of memory.

    cout << endl << endl << "the value of x is: " << x << endl;
    cout << "the value of y is: " << y << endl; 
    cout << "the value of ptr2Y is: " << ptr2Y << endl; //notice how this is equal to the address of y.
    cout << "the value pointed to by ptr2Y is: " << *ptr2Y << endl; //when we DEREFERENCE the pointer, we get the value at the address that the pointer is pointing to. 

    ptr2Y -= 1;
    cout << endl << endl << "the value of x is: " << x << endl;
    cout << "the value of y is: " << y << endl; 
    cout << "the value of ptr2Y is: " << ptr2Y << endl; //notice how the address of ptr2Y is 4 bytes less: 1 integer in memory less (now pointing to the address of x)
    cout << "the value pointed to by ptr2Y is: " << *ptr2Y << endl; //and now when we defererence, it will print the value at the address of X

    ptr2Y = &y; 
    *ptr2Y += 5; 
    cout << endl << endl << "the value of x is: " << x << endl;
    cout << "the value of y is: " << y << endl; 
    cout << "the value of ptr2Y is: " << ptr2Y << endl; //Because we derefferenced first, the address doesn't change
    cout << "the value pointed to by ptr2Y is: " << *ptr2Y << endl; //Now, the value at the address of Y is changed. 

}