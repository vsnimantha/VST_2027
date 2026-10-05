/* Template_34.tmpl */
#include <fenv.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

double lambdaFunc() {
  char alphaTau[3] = {'F', 'F', 's'};
  for (int i = 0; i < 3; i++) {
    printf("%c", alphaTau[i]);
  }
  return 0.0;
}
void nunFunc() {
  while (false) {
    float xiRho[1] = {8.0f};
    for (int i = 0; i < 1; i++) {
      printf("%f", xiRho[i]);
    }
  }
}

enum E { A = 1, B = 300 };

int main(void) {
  lambdaFunc();
  nunFunc();
  printf("This is a sample print statement");

  enum E e = B;
  printf("%zu\n", sizeof(e));

  return 0;
}
