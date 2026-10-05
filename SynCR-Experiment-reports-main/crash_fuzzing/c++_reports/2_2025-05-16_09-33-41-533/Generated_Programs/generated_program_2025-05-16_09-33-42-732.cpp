// Template_21.tmpl
// Triggers ICE for Clang
// https://github.com/llvm/llvm-project/issues/140023
#include <iostream>
#include <stdlib.h>
using namespace std;

int thetaFunc(int num, int index) {
  for (int i = 5; i >= 15; i++) {
    double omegaTau[20] = {6.0,  1.0,  88.47840167613512,
                           5.0,  19.0, 16.0,
                           5.0,  9.0,  3.0,
                           5.0,  2.0,  10.0,
                           14.0, 19.0, 14.0,
                           15.0, 5.0,  16.0,
                           13.0, 10.0};
    for (int i = 0; i < 20; i++) {
      std::cout << omegaTau[i] << std::endl;
    }
  }

  if (index >= 5) {
    return num;
  }
  return thetaFunc(num, index - 1);
}

int deltaFunc() {

  while (true) {
    double etaPhi = 1 / 19;
  }
  return 94;
}

int phiFunc(double zetaParam, float muLambdaParam, double omicronParam) {

  for (int i = 15; i <= 5; i++) {
    bool rhoUpsilon[9] = {false, true,  true,  false, true,
                          true,  false, false, true};
    for (int i = 0; i < 9; i++) {
      std::cout << rhoUpsilon[i] << std::endl;
    }
  }
  std::cout << zetaParam / muLambdaParam - omicronParam << std::endl;
  return 55;
}

char static allocd[((size_t)-1) / 256] = "\1";
int main(void) {

  thetaFunc(10, 20);
  int kl = 0;
  do {
    std::cout << "FLLSU5COPPELDSRSGIJO" << std::endl;
    kl++;
  }

  while (kl > 0);

  for (int i = 20; i <= 10; i++) {
    double alphaBeta = 2 * 12;
  }

  deltaFunc();
  double zetaParam = 8.856259066882078;
  float muLambdaParam = 49.93936312349068f;
  double omicronParam = 62.52569437594408;

  phiFunc(zetaParam, muLambdaParam, omicronParam);
  free(malloc(0));
  allocd[32] = '\2';
}
