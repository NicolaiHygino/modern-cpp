int main() {
  int x = 123;

  int *p; // Declare a new poiner

  p = &x; // Assign to pointer p the address of variable x

  int d = *p; // Dereferencing value of p into variable d

  int &y = x; // Declare a new reference type that references variable x
}
