#include <iostream>

class MyClass {
private:
  int x, y;

public:
  MyClass(int x, int y) : x{x}, y{y} {} // Member initializer list

  // user defined copy constructor
  MyClass(const MyClass &obj) : x{obj.x}, y{obj.y} {}

  void print_x_y() { std::cout << x << y; }
};

int main() {
  MyClass o{1, 2};
  MyClass o2 = o; // Default copy constructor invoked performing a shallow copy
  o.print_x_y();
}
