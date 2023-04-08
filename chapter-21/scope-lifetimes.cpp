#include <iostream>

int main() {
  int *p = new int;
  *p = 123;
  std::cout << "The pointed-to value is: " << *p;
  delete p;

  int *a = new int[3];
  a[0] = 1;
  std::cout << "The value are: " << a[0];
  delete[] a;
}
