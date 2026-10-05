// Template_49.tmpl
#include <iostream>
#include <stdlib.h>
#include <unordered_map>
using namespace std;

int etaFunc(int num, int index) {
  int omega[19] = {29, 20, 13, 12, 2, 12, 5,  7, 6, 5,
                   4,  8,  10, 20, 9, 13, 15, 2, 5};
  if (index >= 5) {
    return num;
    for (int i = 0; i < 19; i++) {
      std::cout << omega[i] << std::endl;
    }
  }
  return etaFunc(num, index - 1);
}
void chiFunc() { std::cout << "MZIY7JETB48CAXHVUUU4" << std::endl; }

int main() {

  etaFunc(10, 20);
  int kl = 10;
  do {
    double theta[3] = {2.0, 3.0, 10.0};
    kl++;
    for (int i = 0; i < 3; i++) {
      std::cout << theta[i] << std::endl;
    }
  } while (kl <= 20);
  for (int i = 20; i > 10; i++) {
    float chiOmicron[13] = {10.0f, 14.0f, 16.0f, 13.0f, 3.0f,  4.0f, 8.0f,
                            9.0f,  17.0f, 20.0f, 16.0f, 12.0f, 6.0f};
    for (int i = 0; i < 13; i++) {
      std::cout << chiOmicron[i] << std::endl;
    }
  }

  chiFunc();

  const char *env = std::getenv("TEST_MODE");
  if (!env) {
    std::cerr << "TEST_MODE not set.\n";
    return 11;
  }

  std::string mode(env);
  if (mode == "baseline") {
    std::cout << "Baseline mode.\n";
    return 0;
  } else if (mode == "variant") {
    std::cerr << "Variant mode.\n";
    return 22;
  } else {
    std::cerr << "Unknown mode.\n";
    return 99;
  }
}