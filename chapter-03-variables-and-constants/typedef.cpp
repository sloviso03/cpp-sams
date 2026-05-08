#include <iostream>

using namespace std;

typedef unsigned short int USHORT;

int main() {
  USHORT Width = 5;
  USHORT Length = 10;
  USHORT Area = Width * Length;

  cout << "Area: " << Area << endl;
  return 0;
}
