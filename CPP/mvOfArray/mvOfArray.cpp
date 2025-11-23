#include <iostream>

int main()
{
  int n[] =  {1, 2, 3, 6, 7, 24, 25, 67, 355, 2567};
  double sum = 0;
  int length = sizeof(n) / sizeof(n[0]);
  for (int i = 0; i < length; i++)
  {
    sum += n[i];
  }
  std::cout << sum / length;
  return 0;
}
