#include <stdio.h>
#include <assert.h>


float average(int [], int);

int main(void) {
  int y[] = {9,5,6,10,2,-3,4};
  assert ((average(y, 7) - 4.7142) < 0.001);

  int x[] = {5};
  assert (average(x, 1) == 5.0);
  printf("Average: passed\n");
  }
