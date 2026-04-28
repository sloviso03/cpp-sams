#include <bitset>
#include <iostream>

int left_shift(int value, int positions) { return value << positions; }

int main() {
  const int base = 5;
  const int shift = 1;

  const int result = left_shift(base, shift);

  std::cout << "Left shift of " << base << " (" << std::bitset<8>(base) << ")"
            << " by " << shift << " (" << std::bitset<8>(shift) << ")"
            << " = " << result << " (" << std::bitset<8>(result) << ")\n";
}
