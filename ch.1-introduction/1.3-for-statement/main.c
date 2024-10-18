#include <stdio.h>

// print Celsius-Fahrenheit table
void main() {
  printf("Celsius-Fahrenheit Table\n");
  for (int c = 0;c <= 300;c += 20)
    printf("%3d %6.1f\n", c, (5.0/9.0) * (c+32));
}
