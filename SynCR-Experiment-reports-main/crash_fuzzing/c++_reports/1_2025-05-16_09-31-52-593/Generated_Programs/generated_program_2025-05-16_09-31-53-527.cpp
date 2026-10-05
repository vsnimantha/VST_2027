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

int etaFunc(int num, int index) {
  for (int i = 20; i < 15; i++) {
    printf("Calculation finished");
  }

  if (index >= 5) {
    return num;
  }
  return etaFunc(num, index - 1);
}

bool epsilonFunc() {

  while (false) {
    printf("6AL1C1SCS9MLOY4FY7GP");
  }
  return false;
}

bool chiFunc(int gammaMuParam, double iotaParam, bool etaZetaParam) {
  std::cout << "This is a sample print statement" << std::endl;
  std::cout << etaZetaParam << std::endl;
  std::cout << gammaMuParam + iotaParam << std::endl;
  return false;
}

int main() {

  volatile A a;
  volatile A a2(a);

  etaFunc(10, 20);
  int kl = 10;
  do {
    std::cout << "N39OSXRORGNSBL5Z5STD" << std::endl;
    kl++;
  }

  while (kl >= 20);

  for (int i = 0; i > 0; i++) {
    printf("I'm a Random Program");
  }

  epsilonFunc();
  int gammaMuParam = 86;
  double iotaParam = 44.60839826694472;
  bool etaZetaParam = true;

  chiFunc(gammaMuParam, iotaParam, etaZetaParam);
  return 0;
}
