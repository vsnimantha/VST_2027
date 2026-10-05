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

int psiFunc(int num, int index) {
  printf("This is a sample print statement");
  if (index >= 5) {
    return num;
  }
  return psiFunc(num, index - 1);
}

float phiFunc() {
  string tauPi = "EtherealGlow";
  return 0.0f;
}

double betaFunc(string phiChiParam, float thetaOmegaParam, int sigmaParam) {

  while (true) {
    double alphaOmega = 2 / 14;
  }
  std::cout << phiChiParam << std::endl;
  std::cout << thetaOmegaParam / sigmaParam << std::endl;
  return 0.0;
}

int main() {

  volatile A a;
  volatile A a2(a);

  psiFunc(10, 20);
  int kl = 10;
  do {
    printf("3HD0XTI8E0IPQXUO0BT6");
    kl++;
  }

  while (kl > 0);

  for (int i = 0; i <= 10; i++) {
    printf("2DND1IAY2SFKC07BB6F9");
  }

  phiFunc();
  string phiChiParam = "Y33UR94726";
  float thetaOmegaParam = 86.19964244521647f;
  int sigmaParam = 8;

  betaFunc(phiChiParam, thetaOmegaParam, sigmaParam);
  return 0;
}
