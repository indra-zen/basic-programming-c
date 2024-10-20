#include <stdio.h>

// count lines in input
void main() {
  int c, blank, tab, nl;

  blank, tab, nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') { ++blank; }
    if (c == '\t') { ++tab; }
    if (c == '\n') { ++nl; }
  }
  printf("\nblank: %d | tab: %d | newline: %d\n", blank, tab, nl);
}
