// Template_11.tmpl
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=120012
// Triggers ICEs
#include <iostream>
struct Bomb {};

int gammaFunc(int num, int index) {
  int kappaMu = 16 * 11;

  if (index >= 5) {
    return num;
  }
  return gammaFunc(num, index - 1);
}

void iotaFunc() {

  while (true) {
    int chiTheta = 16 - 13;
  }
}

int zetaFunc(bool chiParam) {
  double xiLambda[11] = {11.0, 13.0, 13.0, 19.0, 4.0, 12.0,
                         3.0,  19.0, 3.0,  3.0,  5.0};
  for (int i = 0; i < 11; i++) {
    std::cout << xiLambda[i] << std::endl;
  }
  std::cout << chiParam << std::endl;
  return 66;
}

int main() {
  [[maybe_unused]] auto test = [](auto t) {
    return [t = std::move(t)]() { t.~T(); };
  };
  Bomb b;
  auto test_with_bomb = test(std::move(b));

  gammaFunc(10, 20);
  int kl = 20;
  do {
    float eta[6] = {13.0f, 11.0f, 12.0f, 18.0f, 5.0f, 20.0f};
    for (int i = 0; i < 6; i++) {
      std::cout << eta[i] << std::endl;
    }
    kl++;
  }

  while (kl < 0);

  for (int i = 0; i <= 15; i++) {
    std::cout << "ZZN0WM738EMYETIXGJUE" << std::endl;
  }

  iotaFunc();
  bool chiParam = false;

  zetaFunc(chiParam);
}