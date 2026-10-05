/* Template_8.tmpl */
/* TRIGGERS ICES*/
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
/*derived is only in c++ */
/*Crashes the compiler*/
/* if it crashed gcc then it should be handeled and maybe we should report it */
struct Base {
  virtual void func() {}
};

struct Derived : public Base {
  Derived()
      : Derived() {
  } 
};

int main() {

  struct Derived d; 
  return 0;
}
