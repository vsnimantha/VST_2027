// Template_25.tmpl
// GCC ICE but crashes clang as well
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=107360
#include <iostream>
#include <stdlib.h>
using namespace std;

auto f(int n) {
  int(*a)[n] = 0;
  return a;
}

int g() { return sizeof *f(1); }

int betaFunc(int num, int index) {
  printf("This is a sample print statement");
  if (index >= 5) {
    return num;
  }
  return betaFunc(num, index - 1);
}

bool xiFunc() {
  bool thetaChi = true;
  return false;
}

void zetaFunc(double psiDeltaParam) {
  int rhoUpsilon = 8 + 1;
  std::cout << psiDeltaParam << std::endl;
}

int main() {

  betaFunc(10, 20);
  int kl = 5;
  do {
    int upsilon = 16 + 11;
    kl++;
  }

  while (kl < 5);

  for (int i = 20; i >= 10; i++) {
    double deltaEpsilon = 18 - 11;
  }

  xiFunc();
  double psiDeltaParam = 43.47761773646896;

  zetaFunc(psiDeltaParam);
}
