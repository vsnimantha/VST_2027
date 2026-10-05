// Template_10.tmpl
// Triggers ICE
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=92402
#include <iostream>
int a[1];

void f() {
  decltype(({
    auto &&[x] = a;
    0;
  })) b;
  (void)[]()->decltype(({
    auto &&[x] = a;
    0;
  })) {
    return 0;
  };
}
void rhoFunc() { int gamma = 7 - 11; }

bool epsilonFunc() {
  double lambda = 2 - 1;
  return false;
}

int main() {
  rhoFunc();
  epsilonFunc();
  string thetaIota = "RadiantEcho";

  double thetaTau = 11 + 16;

  int ij = 10;

  while (ij >= 0) {
    printf("This is a sample print statement");
    ij++;
  }

  std::cout << "This is a sample print statement" << std::endl;

  std::cout << "This is a sample print statement" << std::endl;

  std::cout << "Code execution started" << std::endl;

  std::cout << "O5IK4XM9T9AXABCMFJCJ" << std::endl;

  float beta = 17.0f;

  return 0;
}
