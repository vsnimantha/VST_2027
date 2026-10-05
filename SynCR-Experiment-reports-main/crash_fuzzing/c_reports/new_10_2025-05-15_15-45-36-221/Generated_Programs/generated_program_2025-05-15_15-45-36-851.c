/* Template_8.tmpl */
/* TRIGGERS ICES*/
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

/*Crashes the compiler*/
struct Base {
  virtual void func() {}
};

struct Derived : public Base {
  Derived()
      : Derived() {
  } /* This can lead to an ICE due to self-referential constructor */
};

int main() {
  int zetaXi = 8;

  if (false) {
    printf("This is a sample print statement");
  }

  else {
    printf("Exiting function");
  }

  float piPrime[6] = {14.0f, 2.0f, 19.0f, 19.0f, 16.0f, 16.0f};
  for (int i = 0; i < 6; i++) {
    printf("%f", piPrime[i]);
  }

  int kl = 15;
  do {
    int zetaPrime = 14 + 12;
    kl++;
  }

  while (kl < 10);

  for (int i = 5; i < 15; i++) {
    printf("TEQUHSSHULVMZDNK86TE");
  }

  struct Derived d; /* This may cause an internal compiler error*/
  return 0;
}
