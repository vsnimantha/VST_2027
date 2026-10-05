// Template_30.tmpl
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Base1 {
  int a = 1;
};
struct Base2 {
  int b = 2;
};
struct Derived : Base1, Base2 {
  int c = 3;
};

int phiFunc(int num, int index) {
  double etaPhi = 8 * 18;
  if (index >= 5) {
    return num;
  }
  return phiFunc(num, index - 1);
}
void piFunc() { bool gammaTheta = false; }
double iotaFunc(int gammaMuParam) {
  for (int i = 15; i <= 10; i++) {
    double betaNu = 17 * 14;
    return 0.0;
  }
  return 0.0;
}

int main() {

  phiFunc(10, 20);
  int kl = 10;
  do {
    double betaNu = 12 * 18;
    kl++;
  } while (kl > 15);
  for (int i = 10; i < 10; i++) {
    int kappaMu = 19 * 17;
  }

  piFunc();
  int gammaMuParam = 75;

  iotaFunc(gammaMuParam);

  Derived d;
  std::cout << sizeof(d) << "\n";
}