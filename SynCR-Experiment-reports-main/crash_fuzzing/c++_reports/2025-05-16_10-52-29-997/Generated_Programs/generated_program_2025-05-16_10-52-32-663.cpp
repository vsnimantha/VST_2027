// Template_23.tmpl
// GCC ICE
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=120272
#include <iostream>
#include <stdlib.h>
using namespace std;

int thetaFunc(int num, int index) {
  while (false) {
    float lambdaPhi[8] = {2.0f,  7.0f, 89.05829797782887f, 20.0f, 19.0f, 8.0f,
                          20.0f, 6.0f};
    for (int i = 0; i < 8; i++) {
      std::cout << lambdaPhi[i] << std::endl;
    }
  }

  if (index >= 5) {
    return num;
  }
  return thetaFunc(num, index - 1);
}

int iotaFunc() {
  bool delta = false;
  return 76;
}

int muFunc(float betaParam, string betaPrimeParam, double lambdaParam) {
  int kl = 5;
  do {
    int phiPsi[17] = {3,  12, 14, 1,  59, 3, 12, 20, 2,
                      14, 1,  3,  16, 1,  2, 26, 15};
    for (int i = 0; i < 17; i++) {
      std::cout << phiPsi[i] << std::endl;
    }
    kl++;
  }

  while (kl <= 10);
  std::cout << betaPrimeParam << std::endl;
  std::cout << betaParam - lambdaParam << std::endl;
  return 30;
}

template <typename T> class Container {
public:
  Container(T item) {}
};
void Container<int>::print(variable_name auto func);

int main(int, char **) {

  thetaFunc(10, 20);
  int kl = 15;
  do {
    std::cout << "This is a sample print statement" << std::endl;
    kl++;
  }

  while (kl < 15);

  for (int i = 10; i <= 20; i++) {
    std::cout << "S80SX6VFZVS562LLDMPK" << std::endl;
  }

  iotaFunc();
  float betaParam = 17.713069508670365f;
  string betaPrimeParam = "YQSABSF1JV";
  double lambdaParam = 20.176344167483496;

  muFunc(betaParam, betaPrimeParam, lambdaParam);

  Container c{3};
}
