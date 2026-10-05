/* Template_14.tmpl */
/* TRIGGERS ICE */
/* https://gcc.gnu.org/bugzilla/show_bug.cgi?id=120257  - similar*/
/* Seems to be a new issue */
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
struct Level3 {
  int data;
};
struct Level2 {
  struct Level3 level3;
};
struct Level1 {
  struct Level2 level2;
};
struct Root {
  struct Level1 level1;
};

int main() {
  struct Root
      r; 
  return 0;
}