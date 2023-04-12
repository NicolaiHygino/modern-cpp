#include <iostream>

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

int main() {
  DeepCopyClassContructor d{1, 2};
  DeepCopyClassContructor d2 = d;
}
