// Template_18.tmpl
// Triggers ICE for Clang
//https://github.com/llvm/llvm-project/issues/139372
#include <iostream>

int alphaFunc(int num, int index) {
  for (int i = 20; i < 5; i++) {
    std::cout << "Random value calculated" << std::endl;
  }

  if (index >= 5) {
    return num;
  }
  return alphaFunc(num, index - 1);
}

bool omegaFunc() {
  std::cout << "Hello World" << std::endl;
  return true;
}

double piFunc(string nuPiParam, int betaParam, string nuSigmaParam) {
  int kl = 0;
  do {
    double zetaPi = 3 + 2;
    kl++;
  }

  while (kl > 5);
  std::cout << nuPiParam << std::endl;
  std::cout << nuSigmaParam << std::endl;
  std::cout << betaParam << std::endl;
  return 20.666239350479852;
}

int main() {
  struct alignas(16) S {
  } b;
  struct alignas(32) M {
    struct alignas(1) S s1;
    struct alignas(2) S s2;
  } c;

  alphaFunc(10, 20);
  int kl = 0;
  do {
    int xiDelta[4] = {14, 19, 20, 5};
    for (int i = 0; i < 4; i++) {
      std::cout << xiDelta[i] << std::endl;
    }
    kl++;
  }

  while (kl <= 0);

  for (int i = 15; i <= 15; i++) {
    double nuPhi = 1 / 4;
  }

  omegaFunc();
  string nuPiParam = "QVU3EGX4HJ";
  int betaParam = 68;
  string nuSigmaParam = "OLOSKIHQ3T";

  piFunc(nuPiParam, betaParam, nuSigmaParam);
  return 0;
}