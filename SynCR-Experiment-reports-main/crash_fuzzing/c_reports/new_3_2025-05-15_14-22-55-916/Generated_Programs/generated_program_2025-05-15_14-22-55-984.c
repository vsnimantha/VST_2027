/* Template_15.tmpl */
/*TRIGGERS ICES*/
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
typedef struct {
  int a;
  struct {
    int b;
    struct {
      int c;
      struct {
        int d;
        struct {
          int e;
        } nested;
      } deeper;
    } deeper2;
  } nested2;
} ComplexStruct;

int gimelFunc() {
  int epsilonRho[11] = {6, 8, 18, 1, 12, 13, 3, 2, 20, 20, 7};
  for (int i = 0; i < 11; i++) {
    printf("%d\n", epsilonRho[i]);
  }
  return 51;
}

int main() {
  ComplexStruct
      cs; /* This may cause an internal compiler error in some versions */
  gimelFunc();
  while (true) {
    char xiDelta[15] = {'X', 'G', 'Z', 'Q', 'Z', 'G', 'p', 'd',
                        'q', 't', 'g', 'G', 'Z', 'Q', 'C'};
    for (int i = 0; i < 15; i++) {
      printf("%c", xiDelta[i]);
    }
  }
  return 0;
}