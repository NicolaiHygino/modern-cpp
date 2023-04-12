#include <iostream>
#include <string>

class MoveClass {
private:
  int x;
  std::string s;

public:
  MoveClass(int x, std::string s) : x{x}, s{s} {} // User provided constructor

  // User provided move constructor
  MoveClass(MoveClass &&obj) : x{std::move(obj.x)}, s{std::move(obj.s)} {
    std::cout << "Move contructor was invoked";
  }

  // Move assignment operator
  // MoveClass &operator=(MoveClass &&otherobj) { return *this; }

  // Move assignment operator adpted from a move constructor
  MoveClass &operator=(MoveClass &&otherobj) {
    x = std::move(otherobj.x);
    s = std::move(otherobj.s);
    return *this;
  }

  void print_x_s() { std::cout << " x: " << x << " s: " << s; }
};

int main() {
  MoveClass m{1, "nico"};
  MoveClass m2{2, "Lindo demais"};
  m2 = std::move(m);
  m2.print_x_s();
}
