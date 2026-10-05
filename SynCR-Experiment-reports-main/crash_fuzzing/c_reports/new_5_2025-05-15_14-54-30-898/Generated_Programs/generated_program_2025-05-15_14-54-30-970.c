/* Template_13.tmpl */
/*TRIGGER ICES*/
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#define RECURSE(x) RECURSE(x)
#define TRIGGER_RECURSE RECURSE(1)
int main() {
  TRIGGER_RECURSE; /* This may cause an internal compiler error due to infinite
                      macro expansio */
  printf("File saved");
  double zetaEta = 15.0;
  if (false) {
    int kl = 20;
    do {
      double epsilonDelta[7] = {15.0, 7.0, 10.0, 6.0, 10.0, 8.0, 5.0};
      for (int i = 0; i < 7; i++) {
        printf("%lf", epsilonDelta[i]);
      }
      kl++;
    }
    while (kl < 0);
  }
  else {
    while (false) {
      int zetaMu[15] = {9, 19, 17, 19, 1, 4, 16, 20, 11, 3, 6, 28, 13, 19, 7};
      for (int i = 0; i < 15; i++) {
        printf("%d\n", zetaMu[i]);
      }
    }
  }
  float sigma[6] = {16.0f, 6.0f, 4.0f, 4.0f, 11.0f, 15.0f};
  for (int i = 0; i < 6; i++) {
    printf("%f", sigma[i]);
  }
  int kl = 0;
  do {
    double nu[4] = {7.0, 19.0, 3.0, 19.0};
    for (int i = 0; i < 4; i++) {
      printf("%lf", nu[i]);
    }
    kl++;
  }
  while (kl >= 20);
  for (int i = 15; i < 10; i++) {
    char lambda[3] = {'n', 'u', 'O'};
    for (int i = 0; i < 3; i++) {
      printf("%c", lambda[i]);
    }
  }
  return 0;
}