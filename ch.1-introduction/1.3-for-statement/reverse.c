#include <stdio.h>

// print Celsius-Fahrenheit table in reverse order
void main() {
  printf("Celsius-Fahrenheit Table\n");
  for (int c = 300;c >= 0;c -= 20)
    printf("%3d %6.1f\n", c, (5.0/9.0) * c + 32);
}
