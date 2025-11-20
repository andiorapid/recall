#include <iostream>

int main() {
  double recLength;
  std::cout << "Write rectangle length: ";
  std::cin >> recLength;
  // << std::endl;
  double recWidth;
  std::cout << "Write rectangle width: ";
  std::cin >> recWidth;
  // << std::endl;
  std::cout << "Rectangle square = " << recLength * recWidth << std::endl;
  return 0;
}
