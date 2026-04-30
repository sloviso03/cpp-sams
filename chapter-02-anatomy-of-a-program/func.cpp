#include <iostream>

int Add(int first, int second) {
  std::cout << "Add() received " << first << " and " << second << std::endl;
  return (first + second);
}

int main() {
  using std::cin;
  using std::cout;

  cout << "I'm in main()!\n";
  int a, b, c;

  cout << "Enter two numbers: ";
  cin >> a;
  cin >> b;
  cout << "\nCalling Add()\n";

  c = Add(a, b);

  cout << "\n Back in main().\n";
  cout << "c was set to: " << c;
  cout << "\nExiting...\n\n";
  return 0;
}
