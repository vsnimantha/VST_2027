// Template_20.tmpl
// Triggers ICE for Clang and gcc
// Combined Bugs
// https://github.com/llvm/llvm-project/issues/102106
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=92402
#include <iostream>
using namespace std;

struct A {
  A(...);
};

int a[1];

void f() {
  decltype(({
    auto &&[x] = a;
    0;
  })) b;
  (void)[]()->decltype(({
    auto &&[x] = a;
    0;
  })) {
    return 0;
  };
}

int deltaFunc(int num, int index) {
  printf("This is a print statement");
  if (index >= 5) {
    return num;
  }
  return deltaFunc(num, index - 1);
}

bool gammaFunc() {
  printf("Hello World");
  return false;
}

void muFunc(double omicronChiParam, int rhoParam, int varAlphaParam) {
  printf("DQBTT07OWTJHPXOE69GE");
  std::cout << omicronChiParam / rhoParam - varAlphaParam << std::endl;
}

int main() {

  volatile A a;
  volatile A a2(a);

  deltaFunc(10, 20);
  int kl = 15;
  do {
    double delta[8] = {10.0, 1.0, 12.0, 5.0, 15.0, 9.0, 18.431734506658515,
                       20.0};
    for (int i = 0; i < 8; i++) {
      std::cout << delta[i] << std::endl;
    }
    kl++;
  }

  while (kl > 20);

  for (int i = 15; i >= 20; i++) {
    printf("JHRT2JQVXCH8ETDNDC64");
  }

  gammaFunc();
  double omicronChiParam = 90.47044133112102;
  int rhoParam = 2;
  int varAlphaParam = 1;

  muFunc(omicronChiParam, rhoParam, varAlphaParam);
  return 0;
}
