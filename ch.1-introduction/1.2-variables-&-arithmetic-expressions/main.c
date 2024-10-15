#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celcius = 0, 20, ..., 300 */
void main() {
  float celcius, fahr;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celcius = lower;
  printf("Celcius to Fahrenheit\n");
  while (celcius <= upper) {
    fahr = (5.0/9.0) * celcius + 32;
    printf("%3.0f %6.1f\n", celcius, fahr);
    celcius += step; // celcius = celcius + step
  }
}
