// Template_22.tmpl
// Triggers ICE for Clang
// https://github.com/llvm/llvm-project/issues/139940
#include <iostream>
#include <stdlib.h>
using namespace std;

int alphaFunc(int num, int index) {
  while (false) {
    printf("Operation timed out");
  }

  if (index >= 5) {
    return num;
  }
  return alphaFunc(num, index - 1);
}

bool chiFunc() {
  int zetaMu[8] = {1, 6, 13, 6, 7, 10, 15, 17};
  for (int i = 0; i < 8; i++) {
    std::cout << zetaMu[i] << std::endl;
  }
  return false;
}

int psiFunc(double betaGammaParam) {

  while (false) {
    int psi = 7 + 13;
  }
  std::cout << betaGammaParam << std::endl;
  return 0;
}

template <typename R, typename... Args>
constexpr auto make_lambda(const R &lambda, Args &&...args)
    -> decltype(lambda(forward<Args>(args)...)) {
  return [lbd = forward<R>(lambda),
          args = forward<Args>(args)...]() -> decltype(lambda(args...)) {

  };
}
int main(int argc, char *argv[]) {

  alphaFunc(10, 20);
  int kl = 20;
  do {
    float sigmaPsi[5] = {6.0f, 10.0f, 5.0f, 15.0f, 11.0f};
    for (int i = 0; i < 5; i++) {
      std::cout << sigmaPsi[i] << std::endl;
    }
    kl++;
  }

  while (kl < 20);

  for (int i = 0; i > 20; i++) {
    printf("JWZLRRTST1OE2GP72LYB");
  }

  chiFunc();
  double betaGammaParam = 90.39892750739273;

  psiFunc(betaGammaParam);

  auto callback = [](int x, const string &y) -> bool {};
  int a{1};
  string b{"test"};
  auto f = make_lambda(callback, a, b);
}
