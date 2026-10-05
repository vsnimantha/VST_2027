/* Template_24.tmpl */
/* GCC Bug*/
/*https://gcc.gnu.org/bugzilla/show_bug.cgi?id=100501*/
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void foo() {
  __asm__(""
          :
          : "m"(({
            if (8)
              ;
          })));
}

int chiFunc() {
  int xiPrime = 15 * 15;
  return 13;
}

void psiFunc() {

  while (false) {
    double thetaChi = 12 / 19;
  }
}

int main() {
  chiFunc();
  psiFunc();
  printf("Connection lost");

  float sigmaEta = 11.0f;

  if (false) {
    char tau[] = "InfiniteDreams";
  }

  else {
    float xiBeta = 20.0f;
  }

  char zetaMu[6] = {'N', 'U', 'd', 'i', 'v', 'X'};
  for (int i = 0; i < 6; i++) {
    printf("%c", zetaMu[i]);
  }

  int kl = 5;
  do {
    int etaPhi[12] = {5, 2, 14, 6, 19, 3, 5, 11, 13, 8, 15, 1};
    for (int i = 0; i < 12; i++) {
      printf("%d\n", etaPhi[i]);
    }
    kl++;
  }

  while (kl >= 0);

  for (int i = 10; i < 5; i++) {
    double sigmaPrime[2] = {7.0, 8.0};
    for (int i = 0; i < 2; i++) {
      printf("%lf", sigmaPrime[i]);
    }
  }

  return 0;
}
