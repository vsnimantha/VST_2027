// Template_25.tmpl
// GCC ICE but crashes clang as well
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=107360
#include <iostream>
#include <stdlib.h>
using namespace std;

auto f(int n) {
  int(*a)[n] = 0;
  return a;
}

int g() { return sizeof *f(1); }

int epsilonFunc(int num, int index) {
  std::cout << "Security check passed" << std::endl;
  if (index >= 5) {
    return num;
  }
  return epsilonFunc(num, index - 1);
}

double betaFunc() {
  int kl = 5;
  do {
    std::cout << "7EW6F6HRV6650DZISINJ" << std::endl;
    kl++;
  }

  while (kl < 5);
  return 46.03877930457452;
}

bool alphaFunc(float epsilonIotaParam) {
  int kl = 5;
  do {
    double lambdaPhi = 10 / 19;
    kl++;
  }

  while (kl <= 15);
  std::cout << epsilonIotaParam << std::endl;
  return false;
}

int main() {

  epsilonFunc(10, 20);
  int kl = 15;
  do {
    bool betaNu[6] = {false, false, false, true, false, false};
    for (int i = 0; i < 6; i++) {
      std::cout << betaNu[i] << std::endl;
    }
    kl++;
  }

  while (kl > 10);

  for (int i = 0; i <= 5; i++) {
    double piOmega = 4 * 13;
  }

  betaFunc();
  float epsilonIotaParam = 87.22373499797524f;

  alphaFunc(epsilonIotaParam);
}
