#include <iostream>

int main() {
  // std::cout << "Please enter a number and press enter: ";
  // int x = 0;
  // std::cin >> x;
  // std::cout << "You entered: " << x << '\n';

  // std::cout << "Please enter two number separated by space and press enter:
  // "; int x2 = 0; int y = 0; std::cin >> x2 >> y; std::cout << "You entered: "
  // << x2 << " and " << y;

  std::cout << "Please enter a character, an integer, and a double: ";
  char c = 0;
  int x = 0;
  double d = 0.0;
  std::cin >> c >> x >> d;
  std::cout << "You entered: " << c << ", " << x << " and " << d;
}
