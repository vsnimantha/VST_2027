/* Template_15.tmpl */
/*TRIGGERS ICES*/
/*https://gcc.gnu.org/bugzilla/show_bug.cgi?id=119123 - similar bug */
/*https://github.com/llvm/llvm-project/issues/47297 - similar issues */
/* seems to be a new issue */

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



int main() {
  ComplexStruct
      cs; /* This may cause an internal compiler error in some versions */
  return 0;
}