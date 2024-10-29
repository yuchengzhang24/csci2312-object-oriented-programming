#include <iostream> 
#include <string>

using namespace std;

class Animal{
  public:
    virtual void speak() const{
      cout << "The animal makes a sound." << endl; 
    }
};

class Dog : public Animal{
  public: 
    void speak1() const{ // not a case of dynamic polymorhism because they are completely different functions
      cout << "Woof! Woof!" << endl;
    }
};

class Cat : public Animal{
  public: 
    void speak() const{ // example of dynamic polymorphism, speak function overrides animal speak function 
      cout << "Meow! Meow!" << endl; 
    }
};

int main(){
  Animal* myDog = new Dog(); // Allocated on the heap (pointer to something on the heap)
  Animal* myCat = new Cat();

  myDog -> speak(); // Dereferences pointer to Dog, Outputs: Woof! Woof! 
  myCat -> speak(); // Outputs: Meow! Meow!
  // Test this: myDog -> speak1();

  delete myDog; 
  delete myCat;

  return 0;
}