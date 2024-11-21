#include <iostream>
#include <vector> 
#include <string> 

using namespace std; 

struct Product{
  string name;
  double price; 

  // constructor 
  Product(string name, double price) : name(name), price(price){}
};

int forward();

int main(){
  // create a vector of products (inventory) 
  vector<Product> inventory ={
    Product("Laptop", 1200.00),
    Product("Smartphone", 800.00),
    Product("Tablet", 450.00),
    Product("Headphones", 150.00),
  };

  // iterate over the vector using an iterator and prints the prducts 
  cout << "Inventory List:\n";
  for(vector<Product>::reverse_iterator it=inventory.rbegin(); it != inventory.rend(); ++it){
    cout << "Product: " << it->name << ", Price: $" << it->price << endl;
  }
  forward();
  return 0;
}

int forward(){
  // create a vector of products (inventory)
  vector<Product> inventory ={
    Product("Laptop", 1200.00),
    Product("Smartphone", 800.00),
    Product("Tablet", 450.00),
    Product("Headphones", 150.00),
  };

  // iterate over the vector using an iterator and prints the products 
  cout << "Inventory List:\n";
  for (vector<Product>::iterator it = inventory.begin(); it != inventory.end(); ++it){
    cout << "Product: " << it->name << ", Price: $" << it->price << endl;
  }
  return 0;
}