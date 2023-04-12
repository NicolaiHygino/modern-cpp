#include <iostream>

class MyBaseClass {
public:
  virtual void do_work() { std::cout << "Hello from a base class.\n"; }
};

class MyDerivedClass : public MyBaseClass {
public:
  void do_work() { std::cout << "Hello from a derived class.\n"; }
};

class MyAbstractClass {
public:
  virtual void do_word() = 0;
};

class MyDerivedAbstractClassImpl : public MyAbstractClass {
public:
  void do_word() { std::cout << "Hello form a derived abstract class. \n"; }
};

int main() {
  MyBaseClass *o = new MyDerivedClass;
  o->do_work();
  delete o;
}
