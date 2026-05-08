#include <iostream>

int main() {
  enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

  Days today;
  today = Monday;

  if (today == Monday)
    std::cout << "I hate Mondays...\n";
  else
    std::cout << "Keep going...\n";

  return 0;
}
