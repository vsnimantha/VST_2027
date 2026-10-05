/* Template_16.tmpl */
/* TRIGGERS ICE */
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
struct SelfRef {
  struct SelfRef *next;
  int data[1000];
};
int main() {
  struct SelfRef
      s[100000]; /* This may cause an internal compiler error due to size */
  float phi[15] = {2.0f,  8.0f,  5.0f,  16.0f, 3.0f, 5.0f,  10.0f, 14.0f,
                   15.0f, 15.0f, 17.0f, 4.0f,  4.0f, 14.0f, 4.0f};
  for (int i = 0; i < 15; i++) {
    printf("%f", phi[i]);
  }
  char alphaTau[] = "GoldenPhoenix";
  if (true) {
    int kl = 20;
    do {
      printf("Network connection established");
      kl++;
    }
    while (kl <= 20);
  }
  else {
    char beta[6] = {'P', 'g', 'J', 'a', 'K', 'H'};
    for (int i = 0; i < 6; i++) {
      printf("%c", beta[i]);
    }
  }
  return 0;
}
