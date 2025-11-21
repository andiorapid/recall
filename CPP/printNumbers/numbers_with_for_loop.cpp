#include <iostream>

int main()
{
  int n;
  std::cout << "Write your number: ";
  std::cin >> n;

  for (int i = 1; i <= n; i++)
  {
    std::cout << i << std::endl;
  }
  return 0;
}
