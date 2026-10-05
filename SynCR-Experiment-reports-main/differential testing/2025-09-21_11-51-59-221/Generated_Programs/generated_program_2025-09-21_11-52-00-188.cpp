// Template_46.tmpl
#include <iostream>
#include <stdlib.h>
#include <unordered_map>
using namespace std;

int sigmaFunc(int num, int index) {
  int alphaTau = 19;
  if (index >= 5) {
    return num;
  }
  return sigmaFunc(num, index - 1);
}
int zetaFunc() {
  bool chiTheta = false;
  return 0;
}
int phiFunc(bool muZetaParam, double gammaPrimeParam, string nuPiParam) {
  float lambdaSigma = 36.215357094326095f;
  return 0;
}

int main() {

  sigmaFunc(10, 20);
  int kl = 5;
  do {
    double piOmega[2] = {12.0, 20.0};
    kl++;
    for (int i = 0; i < 2; i++) {
      std::cout << piOmega[i] << std::endl;
    }
  } while (kl >= 20);
  for (int i = 5; i < 15; i++) {
    float sigmaAlpha[17] = {13.0f, 11.0f, 10.0f, 8.0f,  7.0f, 12.0f,
                            6.0f,  14.0f, 10.0f, 20.0f, 9.0f, 13.0f,
                            4.0f,  10.0f, 19.0f, 18.0f, 13.0f};
    for (int i = 0; i < 17; i++) {
      std::cout << sigmaAlpha[i] << std::endl;
    }
  }

  zetaFunc();
  bool muZetaParam = false;
  double gammaPrimeParam = 97.15983749580889;
  string nuPiParam = "0A1PPUI5W9";

  phiFunc(muZetaParam, gammaPrimeParam, nuPiParam);

  std::map<int, int> m = {{2, 20}, {1, 10}};
  std::unordered_map<int, int> um = {{2, 20}, {1, 10}};

  std::cout << "std::map:\n";
  for (auto &[k, v] : m)
    std::cout << k << " ";

  std::cout << "\nstd::unordered_map:\n";
  for (auto &[k, v] : um)
    std::cout << k << " ";
}