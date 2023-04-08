#include <iostream>

int main() {
  bool b{true};
  char c = 'a';
  c = 'b';
  std::cout << "The size of type char is: " << sizeof(c) << " byte(s)\n";

  int x = 123;
  int y = -256;
  std::cout << "The value of x is: " << x << ", the value of y is: " << y;

  int a = 123;
  int u{123};
  int z = {123};
}
