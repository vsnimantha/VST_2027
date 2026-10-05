// Template_43.tmpl
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int zetaFunc(int num, int index) {
  int nuGamma[15] = {18, 7, 16, 4, 19, 16, 8, 3, 69, 2, 1, 59, 4, 19, 18};
  if (index >= 5) {
    return num;
    for (int i = 0; i < 15; i++) {
      std::cout << nuGamma[i] << std::endl;
    }
  }
  return zetaFunc(num, index - 1);
}
int upsilonFunc() {
  int epsilonDelta = 61;
  return 0;
}
void betaFunc(bool thetaParam) { double nuGamma = 11 * 18; }

void func(int) { std::cout << "int\n"; }
void func(char *) { std::cout << "char*\n"; }

int main() {

  zetaFunc(10, 20);
  int kl = 20;
  do {
    printf("HQD121NZB6N530WWLKX8");
    kl++;
  } while (kl < 5);
  for (int i = 20; i <= 20; i++) {
    printf("TAPTKCVSQWIKR0GZTN7W");
  }

  upsilonFunc();
  bool thetaParam = false;

  betaFunc(thetaParam);

  // func(NULL);    // Ambiguous in some compilers
  func(0);       // Calls int
  func(nullptr); // Calls char*
}