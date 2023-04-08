#include <iostream>
#include <string>
int main() {
  // std::string h = "Hello ";
  // std::string w = "World";
  // char c = '!';

  // std::string hello_world = h += w += c;

  // std::cout << hello_world << '\n';

  // -- String indexing
  // std::string s = "Nicolai é lindo demais";
  // char c1 = s[0];    // N
  // char c2 = s.at(0); // N
  // char c3 = s[6];    // i
  // char c4 = s.at(6); // i

  // -- String comparisons with == equals operator
  // std::string compare_string = "Hello";
  // if (compare_string == "Hello") {
  //   std::cout << "The string is equal to \"Hello\"" << '\n';
  // }

  // std::string another_string = "Nico";
  // if (another_string == "nico") {
  //   std::cout << "String is Equal" << '\n';
  // } else {
  //   std::cout << "Not equals" << '\n';
  // }

  // -- Pass a String to std::cout with getline function
  // std::string inputed_string;
  // std::cout << "Please enter a string: \n";
  // std::getline(std::cin, inputed_string);
  // std::cout << "You entered: " << inputed_string;

  // -- A Pointer to a String
  // std::string s = "Hello Wordl.";
  // std::cout << s.c_str();

  // -- Substring
  // std::string s = "Hello World.";
  // std::string my_sub_string = s.substr(6, 5);
  // std::cout << "The substring value is: " << my_sub_string;

  // Finding a Substring
  std::string s = "This is a World string.";
  std::string string_to_find = "Hello";
  std::string::size_type found = s.find(string_to_find);

  if (found != std::string::npos) {
    std::cout << "Substring fount at position: " << found;
  } else {
    std::cout << "The substring is not found.";
  }
}
