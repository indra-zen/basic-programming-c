#include <stdio.h>

#define LOWER	0	// lower limit of the table
#define UPPER	300	// upper limit
#define STEP	20	// step size

void main() {
  for (int fahr = LOWER; fahr <= UPPER; fahr += STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}
