#include <iostream>
#include <string>

class OverloadOperators {
private:
  int x;
  double d;

public:
  OverloadOperators() : x{0}, d{0.0} {}

  // prefix overload ++
  OverloadOperators &operator++() {
    ++x;
    ++d;
    std::cout << "Prefix operator ++ invoked.\n";
    return *this;
  }

  // postfix operator ++
  OverloadOperators &operator++(int) {
    OverloadOperators tmp(*this); // create a copy
    operator++();                 // invoke the prefix operator overload
    std::cout << "Postfix operator ++ invoked.\n";
    return tmp; // return old value
  }

  // binary operator +=
  OverloadOperators &operator+=(const OverloadOperators &obj) {
    this->x += obj.x;
    this->d += obj.d;
    return *this;
  }

  // arithmetic + operator
  friend OverloadOperators operator+(OverloadOperators l_obj,
                                     const OverloadOperators &r_obj) {
    l_obj += r_obj;
    return l_obj;
  }

  void print() { std::cout << x << " " << d; }
};

int main() {
  OverloadOperators overload_operators;
  // call prefix operator
  ++overload_operators;
  // the same as:
  overload_operators.operator++();
  overload_operators.print();

  // call postfix operator
  overload_operators++;
  // the same as:
  overload_operators.operator++(0);

  // call binary operator
  OverloadOperators overload_operators2;
  overload_operators += overload_operators2;

  // call arithmetic + operator
  OverloadOperators result;
  result = overload_operators + overload_operators2;
}
