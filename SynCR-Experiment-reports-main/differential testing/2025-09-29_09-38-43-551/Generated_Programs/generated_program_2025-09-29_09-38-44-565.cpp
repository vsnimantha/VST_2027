// Template_51.tmpl
#include <iostream>
#include <stdlib.h>
#include <unordered_map>
using namespace std;

int muFunc(int num, int index) {
  for (int i = 0; i > 10; i++) {
    printf("Calculation finished");
  }
  if (index >= 5) {
    return num;
  }
  return muFunc(num, index - 1);
}
double deltaFunc() {
  std::cout << "54H1UWY7B2NTE4EQZFLR" << std::endl;
  return 76.0495409372214;
}

int main() {

  muFunc(10, 20);
  int kl = 10;
  do {
    double kappaMu = 18 / 4;
    kl++;
  } while (kl > 15);
  for (int i = 15; i >= 20; i++) {
    double xi[18] = {12.0, 11.0, 16.0, 19.0, 5.0,  13.0, 16.0, 5.0,  14.0,
                     13.0, 7.0,  15.0, 19.0, 18.0, 5.0,  1.0,  14.0, 6.0};
    for (int i = 0; i < 18; i++) {
      std::cout << xi[i] << std::endl;
    }
  }

  deltaFunc();

#ifdef VARIANT
  std::cerr << "Compiled as VARIANT.\n";
  return 55;
#else
  std::cout << "Compiled as BASELINE.\n";
  return 0;
#endif
}