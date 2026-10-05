// Template_21.tmpl
// Triggers ICE for Clang
// https://github.com/llvm/llvm-project/issues/140023
#include <iostream>
#include <stdlib.h>
using namespace std;

int lambdaFunc(int num, int index) {
  for (int i = 10; i > 0; i++) {
    std::cout << "NC741BUMH9EFRH8WUWNI" << std::endl;
  }

  if (index >= 5) {
    return num;
  }
  return lambdaFunc(num, index - 1);
}

bool chiFunc() {
  int kl = 0;
  do {
    int deltaBeta[17] = {3,  14, 16, 19, 17, 4,  19, 5, 20,
                         19, 5,  9,  20, 20, 19, 13, 19};
    for (int i = 0; i < 17; i++) {
      std::cout << deltaBeta[i] << std::endl;
    }
    kl++;
  }

  while (kl < 20);
  return true;
}

float lambdaFunc(bool betaGammaParam, int betaParam, string etaPhiParam) {
  float rho = 9.0f;
  std::cout << betaGammaParam << std::endl;
  std::cout << etaPhiParam << std::endl;
  std::cout << betaParam << std::endl;
  return 52.315889424221695f;
}

char static allocd[((size_t)-1) / 256] = "\1";
int main(void) {

  lambdaFunc(10, 20);
  int kl = 5;
  do {
    std::cout << "Calculation finished" << std::endl;
    kl++;
  }

  while (kl <= 10);

  for (int i = 20; i <= 5; i++) {
    printf("This is a sample print statement");
  }

  chiFunc();
  bool betaGammaParam = false;
  int betaParam = 60;
  string etaPhiParam = "Z4XYI1RB3U";

  lambdaFunc(betaGammaParam, betaParam, etaPhiParam);
  free(malloc(0));
  allocd[32] = '\2';
}
