#include <iostream>
using namespace std;

void DemonstrationFunction() { cout << "In Demonstration Function" << endl; }

int main() {
  cout << "In main" << endl;
  DemonstrationFunction();
  cout << "Back in main" << endl;
  return 0;
}
