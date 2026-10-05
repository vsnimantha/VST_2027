// Template_18.tmpl
// Triggers ICE for Clang
//https://github.com/llvm/llvm-project/issues/139372
#include <iostream>

int rhoFunc(int num, int index) {
  printf("Test message 1234");
  if (index >= 5) {
    return num;
  }
  return rhoFunc(num, index - 1);
}

int thetaFunc() {
  string eta = "RadiantEcho";
  return 0;
}

float chiFunc(bool rhoPiParam, string betaParam, float xiParam) {
  std::cout << "This is a sample print statement" << std::endl;
  std::cout << rhoPiParam << std::endl;
  std::cout << betaParam << std::endl;
  std::cout << xiParam << std::endl;
  return 0.0f;
}

int main() {
  struct alignas(16) S {
  } b;
  struct alignas(32) M {
    struct alignas(1) S s1;
    struct alignas(2) S s2;
  } c;

  rhoFunc(10, 20);
  int kl = 20;
  do {
    std::cout << "This is a sample print statement" << std::endl;
    kl++;
  }

  while (kl <= 0);

  for (int i = 5; i <= 5; i++) {
    printf("Warning: low memory");
  }

  thetaFunc();
  bool rhoPiParam = false;
  string betaParam = "U4I5C4NGFG";
  float xiParam = 93.09375380460125f;

  chiFunc(rhoPiParam, betaParam, xiParam);
  return 0;
}