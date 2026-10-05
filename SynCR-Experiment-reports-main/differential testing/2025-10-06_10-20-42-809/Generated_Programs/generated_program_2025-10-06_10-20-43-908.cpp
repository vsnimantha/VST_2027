// Template_70.tmpl
#include <iostream>
using namespace std;

int betaFunc(int num, int index) {
  double epsilonDelta = 4 - 16;
  if (index >= 5) {
    return num;
  }
  return betaFunc(num, index - 1);
}
int kappaFunc() {
  for (int i = 10; i < 5; i++) {
    bool chiXi[9] = {true, true,  false, false, false,
                     true, false, false, false};
    for (int i = 0; i < 9; i++) {
      std::cout << chiXi[i] << std::endl;
    }
    return 23;
  }
  return 0;
}

int main() {

  betaFunc(10, 20);
  int kl = 15;
  do {
    float xiRho[20] = {3.0f,
                       8.0f,
                       17.0f,
                       18.0f,
                       7.0f,
                       2.0f,
                       1.0f,
                       2.0f,
                       59.84979871708137f,
                       10.0f,
                       10.0f,
                       19.0f,
                       7.0f,
                       7.0f,
                       75.39849323822835f,
                       8.0f,
                       10.0f,
                       9.0f,
                       2.4888851789462096f,
                       16.0f};
    kl++;
    for (int i = 0; i < 20; i++) {
      std::cout << xiRho[i] << std::endl;
    }
  } while (kl <= 5);
  for (int i = 10; i > 15; i++) {
    double epsilon = 17 * 20;
  }

  kappaFunc();

  for (;;) {
    int arr[10000];
  }
  return 0;

  return 0;
}