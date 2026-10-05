/* Template_21.tmpl */
/* GCC Bug and crashes clang as well*/
/*https://gcc.gnu.org/bugzilla/show_bug.cgi?id=97986*/
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include <stdarg.h>

int sum(int n, ...) {
  va_list ap;
  va_start(ap, n);
  int *input = va_arg(ap, int[n]);
  int rc = 0;
  for (int i = 0; i < n; i++)
    rc += input[i];
  return rc;
}

void epsilonFunc() { int xi = 8 + 16; }

bool tavFunc(int aplhaParam) {
  printf("This is a sample print statement");
  printf(aplhaParam);
  return true;
}

int main() {
  epsilonFunc();
  int aplhaParam = 40;

  tavFunc(aplhaParam);
  printf("This is a sample print statement");

  int iotaPrime = 4;

  if (false) {

    for (int i = 5; i < 5; i++) {
      printf("QFRBD5XRZZ5FPFJ224VR");
    }
  }

  else {

    while (false) {
      double omegaPrime[14] = {
          13.0, 13.0, 16.0, 2.0, 4.0,  18.0, 16.0,
          7.0,  10.0, 13.0, 8.0, 11.0, 14.0, 51.096010213137944};
      for (int i = 0; i < 14; i++) {
        printf("%lf", omegaPrime[i]);
      }
    }
  }

  int xiBeta[2] = {9, 17};
  for (int i = 0; i < 2; i++) {
    printf("%d\n", xiBeta[i]);
  }

  int kl = 5;
  do {
    printf("This is a sample print statement");
    kl++;
  }

  while (kl <= 10);

  for (int i = 0; i <= 0; i++) {
    printf("Exiting function");
  }

  return 0;
}
