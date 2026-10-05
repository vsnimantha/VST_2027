// Template_14.tmpl
// Triggers ICE
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=120149
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
template <class A, class B>
auto f(A a, B b) -> decltype(accumulate(begin(a), end(a), B{},
                                        [](B t, A i) -> B {})) {}

int alphaFunc(int num, int index) {
  int kl = 0;
  do {
    printf("This is a sample print statement");
    kl++;
  }

  while (kl >= 20);
  if (index >= 5) {
    return num;
  }
  return alphaFunc(num, index - 1);
}

int piFunc() {

  for (int i = 5; i > 5; i++) {
    double upsilonPhi[14] = {6.0,  8.0, 4.0, 13.0, 6.0, 12.0, 14.0,
                             16.0, 9.0, 4.0, 3.0,  7.0, 13.0, 20.0};
    for (int i = 0; i < 14; i++) {
      std::cout << upsilonPhi[i] << std::endl;
    }
  }
  return 0;
}

void xiFunc(string betaParam) {
  string sigma = "5KWNQDRRXT";
  std::cout << betaParam << std::endl;
}

int main() {
  vector<int> v;

  int i;
  f(v, i);

  alphaFunc(10, 20);
  int kl = 15;
  do {
    double zetaMu[18] = {16.0,
                         17.0,
                         2.0,
                         20.0,
                         40.209064242104084,
                         8.0,
                         5.0,
                         10.0,
                         8.0,
                         7.0,
                         18.0,
                         20.0,
                         16.0,
                         20.0,
                         93.15904087314983,
                         11.0,
                         96.39637464608826,
                         1.0};
    for (int i = 0; i < 18; i++) {
      std::cout << zetaMu[i] << std::endl;
    }
    kl++;
  }

  while (kl <= 0);

  for (int i = 20; i < 10; i++) {
    std::cout << "This is a sample print statement" << std::endl;
  }

  piFunc();
  string betaParam = "OBZUFASN16";

  xiFunc(betaParam);
  bool xi = true;

  if (true) {
    int kl = 15;
    do {
      std::cout << "Random value calculated" << std::endl;
      kl++;
    }

    while (kl <= 0);
  }

  else {
    std::cout << "I'm a Random Program" << std::endl;
  }

  double sigmaPsi = 10 * 12;

  while (false) {
    std::cout << "Recovery in progress" << std::endl;
  }

  std::cout << "6GECRJULMW00OB74R1JI" << std::endl;
}