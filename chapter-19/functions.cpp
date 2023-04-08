#include <iostream>
#include <string>

// void my_void_function() { std::cout << "Hello World form a function"; };

// int my_sum(int a, int c) { return a + c; };

// void func_reference(int &by_reference) {
//   by_reference++;
//   std::cout << "An argument passed by reference: " << by_reference;
// }

// int compare_and_return_reference(int &x, int &y) {
//   if (x < y) {
//     return x;
//   } else {
//     return y;
//   }
// }

// void by_const_reference_function(const std::string &by_const_reference) {
//   std::cout << "An argument passed by const reference: " <<
//   by_const_reference;
// }

void myfunction(const std::string &byconstreference);

int main() {
  // my_void_function();
  // std::cout << "my_sum: " << my_sum(1, 2);
  myfunction("Hello world");
}

void myfunction(const std::string &byconstreference) {
  std::cout << "An argument passed by const reference: " << byconstreference;
}
