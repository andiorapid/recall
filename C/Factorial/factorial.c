#include <stdio.h>

int main() {
  int num;
  printf("Write your number: ");
  scanf("%d", &num);

  int fact = 1;
  for (int i = 1; i <= num; ++i) {
    fact *= i;
  }
  printf("Result = %d\n", fact);
}
