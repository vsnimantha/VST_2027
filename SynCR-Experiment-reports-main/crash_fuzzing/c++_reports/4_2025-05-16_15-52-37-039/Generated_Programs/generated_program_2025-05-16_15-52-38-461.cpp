// Template_24.tmpl
// GCC ICE
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=120199
#include <iostream>
#include <stdlib.h>
using namespace std;

template <size_t N> void kernel1() { __builtin_addressof(kernel1); }

int omicronFunc(int num, int index) {
  printf("This is a sample print statement");
  if (index >= 5) {
    return num;
  }
  return omicronFunc(num, index - 1);
}

void nuFunc() {

  for (int i = 10; i > 5; i++) {
    std::cout << "OL5UNC40116W2AG8PGU5" << std::endl;
  }
}

int iotaFunc(bool gammaPrimeParam, int iotaParam, bool phiParam) {
  printf("This is a sample print statement");
  std::cout << gammaPrimeParam << std::endl;
  std::cout << phiParam << std::endl;
  std::cout << iotaParam << std::endl;
  return 97;
}

int main(int, char **) {

  omicronFunc(10, 20);
  int kl = 15;
  do {
    bool sigmaAlpha[2] = {false, false};
    for (int i = 0; i < 2; i++) {
      std::cout << sigmaAlpha[i] << std::endl;
    }
    kl++;
  }

  while (kl >= 0);

  for (int i = 5; i >= 10; i++) {
    int beta[9] = {11, 7, 1, 14, 8, 2, 62, 7, 10};
    for (int i = 0; i < 9; i++) {
      std::cout << beta[i] << std::endl;
    }
  }

  nuFunc();
  bool gammaPrimeParam = false;
  int iotaParam = 99;
  bool phiParam = false;

  iotaFunc(gammaPrimeParam, iotaParam, phiParam);
}
