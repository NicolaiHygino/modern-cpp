#include <iostream>

int main() {
  int x = 10;
  int *p = &x;
  // int *n = nullptr; // initialize a pointer that doesn't point to a object

  int y = *p;

  std::cout << "The value of y is: " << y << '\n';
  std::cout << "Dereferencing p: " << *p;
  std::cout << "The valur of referencing x is: " << &x;
}
