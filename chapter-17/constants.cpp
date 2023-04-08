int main() {
  const int m = 5;
  int arr[m] = {1, 2, 3, 4, 5};

  constexpr int n = 123;

  constexpr double d = 456.78;

  constexpr double d2 = d;

  // compile-time error, the value of x is not knows during compile-time
  // int x = 123;
  // constexpr int n2 = x;
}
