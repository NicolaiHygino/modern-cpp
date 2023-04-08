#include <iostream>

// class MyClass; // declade a class name

// // class MyClass {}; // declare an empty class;

// class MyClass { // define a member field to the class
//   char c;
//   int x;
//   double d;

//   // void do_something();

//   void do_something() { std::cout << "Hello world from a class."; }
//   void do_another_something();
// };

// void MyClass::do_another_something() { std::cout << "Printed anything. :v"; }

class MyClass {
  // private:
  //   int x = 123;

public:
  int x, y;

  // MyClass(int x, int y) {
  //   this->x = x;
  //   this->y = y;
  // }

  MyClass(int x, int y) : x{x}, y{y} {} // Member initializer list

  // user defined copy constructor
  MyClass(const MyClass &obj)
      : x{obj.x}, y{obj.y} {} // initialize members with other object's members

  void printx() { std::cout << x; }
  void print_x_y() { std::cout << x << y; }
};

class DeepCopyClassContructor {
private:
  int x;
  int *p;

public:
  DeepCopyClassContructor(int x, int p) : x{x}, p{new int{p}} {}
  DeepCopyClassContructor(const DeepCopyClassContructor &obj)
      : x{obj.x}, p{new int{*obj.p}} {}
};

class CopyAssignment {
  CopyAssignment &operator=(const CopyAssignment &obj) { return *this; }
};

class MoveClass {
private:
  int x;
  std::string s;

public:
  MoveClass(int x, std::string s) : x{x}, s{s} {}
  MoveClass(MoveClass &&obj) : x{std::move(obj.x)}, s{std::move(obj.s)} {}
};

int main() {
  // MyClass o; // define an instance of the class;
  MyClass o{1, 2};
  // MyClass o2 = o; // Default copy constructor invoked performing a shallow
  // copy
  MyClass o2 = o; // Default copy constructor invoked performing a shallow copy
  o.printx();
  o.print_x_y();

  DeepCopyClassContructor d{1, 2};
  DeepCopyClassContructor d2 = d;

  MoveClass m{1, "nico"};
  MoveClass m2 = std::move(m);
  // MoveClass m2{std::move(m)};
}
