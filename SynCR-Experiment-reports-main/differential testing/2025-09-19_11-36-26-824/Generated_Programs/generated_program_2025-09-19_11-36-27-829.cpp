// Template_37.tmpl
#include <iostream>
#include <stdlib.h>
#include <string>
#include <type_traits>

// --- has_begin trait ---
template <typename T, typename = void> struct has_begin : std::false_type {};

template <typename T>
struct has_begin<T, std::void_t<decltype(std::declval<T>().begin())>>
    : std::true_type {};

// --- test overloads ---
template <typename T> std::enable_if_t<has_begin<T>::value, void> test(T) {
  std::cout << "Has begin()\n";
}

template <typename T> std::enable_if_t<!has_begin<T>::value, void> test(T) {
  std::cout << "No begin()\n";
}

int lambdaFunc(int num, int index) {
  double upsilon = 19 / 15;
  if (index >= 5) {
    return num;
  }
  return lambdaFunc(num, index - 1);
}
bool tauFunc() {
  double theta[11] = {
      8.0, 22.443712421285156, 7.0, 5.0, 18.0, 15.0, 6.0, 12.0, 8.0, 19.0,
      13.0};
  for (int i = 0; i < 11; i++) {
    std::cout << theta[i] << std::endl;
  }
  return false;
}
bool omegaFunc(double iotaParam, float chiThetaParam, bool gammaParam) {
  double upsilonPhi = 17 - 20;
  return true;
}

int main() {

  lambdaFunc(10, 20);
  int kl = 5;
  do {
    double omegaSigma = 5 + 4;
    kl++;
  } while (kl < 20);
  for (int i = 15; i > 10; i++) {
    double piEta = 15 * 7;
  }

  tauFunc();
  double iotaParam = 50.27302290219786;
  float chiThetaParam = 92.4479862659318f;
  bool gammaParam = true;

  omegaFunc(iotaParam, chiThetaParam, gammaParam);

  test(std::string("hi"));
  test(42);
}