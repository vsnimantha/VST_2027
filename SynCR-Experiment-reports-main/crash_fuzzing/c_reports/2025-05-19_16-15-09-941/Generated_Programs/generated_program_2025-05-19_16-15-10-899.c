/* Template_25.tmpl */
/* GCC Bug but crashes clang as well*/
/*https://gcc.gnu.org/bugzilla/show_bug.cgi?id=116141*/
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void ayinFunc() {
  float upsilonSigma[6] = {3.0f, 15.0f, 7.0f, 11.0f, 13.0f, 13.0f};
  for (int i = 0; i < 6; i++) {
    printf("%f", upsilonSigma[i]);
  }
}

int kappaFunc() {
  float piOmega = 12.0f;
  return 99;
}

int main() {
  ayinFunc();
  kappaFunc();
  printf("9RKFNMY8S9QO9PPJHP0K");

  float iotaPrime = 5.0f;

  if (true) {

    while (false) {
      double kappaAlpha[12] = {18.0, 20.0, 1.0,  6.0,  8.0,
                               5.0,  8.0,  18.0, 19.0, 30.437611260240004,
                               11.0, 8.0};
      for (int i = 0; i < 12; i++) {
        printf("%lf", kappaAlpha[i]);
      }
    }
  }

  else {
    char alphaOmega = 'b';
  }

  double omegaNu[3] = {99.04824516595238, 70.40681170375704, 12.0};
  for (int i = 0; i < 3; i++) {
    printf("%lf", omegaNu[i]);
  }

  int kl = 0;
  do {
    double gamma = 8 + 20;
    kl++;
  }

  while (kl >= 20);

  for (int i = 20; i > 5; i++) {
    int thetaOmega[19] = {19, 3, 19, 2, 18, 12, 5,  5,  1, 16,
                          19, 6, 5,  9, 18, 7,  19, 10, 15};
    for (int i = 0; i < 19; i++) {
      printf("%d\n", thetaOmega[i]);
    }
  }

  struct vec_int {
    int N;
  } p = {0};
  __auto_type vp = 0 ? ({
    struct vec_int *q = &p;
    (int(*)[q->N])(0);
  })
                     : 0;
  (*(vp + 1))[5];

  return 0;
}
