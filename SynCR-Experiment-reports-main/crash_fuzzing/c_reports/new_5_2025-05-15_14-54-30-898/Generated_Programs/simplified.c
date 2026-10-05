/* Template_13.tmpl */
/*TRIGGER ICES*/
/*https://gcc.gnu.org/bugzilla/show_bug.cgi?id=120257 - similar c++ issue */
/*Not exact same issue have been reported*/
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#define RECURSE(x) RECURSE(x)
#define TRIGGER_RECURSE RECURSE(1)
int main() {
  TRIGGER_RECURSE; 
 
  return 0;
}