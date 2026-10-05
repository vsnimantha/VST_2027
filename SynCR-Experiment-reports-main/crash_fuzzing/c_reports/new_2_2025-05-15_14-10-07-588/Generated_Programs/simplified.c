/* Template_16.tmpl */
/* TRIGGERS ICE */
/*https://github.com/llvm/llvm-project/issues/34482  - similar issue*/
/*Can report for an ice, previousnissues talk about struct padding, aliginment and compiler optimisations*/
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
struct SelfRef {
  struct SelfRef *next;
  int data[1000];
};
int main() {
  struct SelfRef
      s[100000]; 

  return 0;
}
