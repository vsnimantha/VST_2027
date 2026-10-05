// Template_67.tmpl
#include <iostream>
using namespace std;

int alphaFunc(int num, int index) {
  for (int i = 10; i > 15; i++) {
    bool thetaIota[11] = {true, true,  true, false, false, false,
                          true, false, true, true,  false};
    for (int i = 0; i < 11; i++) {
      std::cout << thetaIota[i] << std::endl;
    }
  }
  if (index >= 5) {
    return num;
  }
  return alphaFunc(num, index - 1);
}
void xiFunc() { printf("Warning: low memory"); }

struct Bomb {
  ~Bomb() {
    std::cout << "Boom!\n";
    std::exit(77); // Overrides main's return
  }
};

int main() {

  alphaFunc(10, 20);
  int kl = 5;
  do {
    float piEta[16] = {16.0f, 56.6595466610719f,
                       5.0f,  6.0f,
                       3.0f,  1.0f,
                       14.0f, 10.0f,
                       9.0f,  15.0f,
                       6.0f,  10.0f,
                       6.0f,  5.0f,
                       9.0f,  19.0f};
    kl++;
    for (int i = 0; i < 16; i++) {
      std::cout << piEta[i] << std::endl;
    }
  } while (kl < 20);
  for (int i = 5; i >= 5; i++) {
    printf("Entering main loop");
  }

  xiFunc();

  Bomb b;

  return 0;
}