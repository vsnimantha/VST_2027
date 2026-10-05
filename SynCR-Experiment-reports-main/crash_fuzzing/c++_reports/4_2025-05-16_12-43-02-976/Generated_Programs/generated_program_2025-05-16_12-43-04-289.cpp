// Template_24.tmpl
// GCC ICE
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=120199
#include <iostream>
#include <stdlib.h>
using namespace std;

template <size_t N> void kernel1() { __builtin_addressof(kernel1); }

int rhoFunc(int num, int index) {
  std::cout << "Security check passed" << std::endl;
  if (index >= 5) {
    return num;
  }
  return rhoFunc(num, index - 1);
}

void chiFunc() { double upsilonSigma = 18.0; }

bool epsilonFunc(int thetaKappaParam) {
  int omega = 13 + 3;
  std::cout << thetaKappaParam << std::endl;
  return false;
}

int main(int, char **) {

  rhoFunc(10, 20);
  int kl = 5;
  do {
    int phiBeta[6] = {9, 10, 15, 20, 15, 8};
    for (int i = 0; i < 6; i++) {
      std::cout << phiBeta[i] << std::endl;
    }
    kl++;
  }

  while (kl > 15);

  for (int i = 15; i <= 5; i++) {
    string gamma[15] = {
        "RadiantEcho",      "BrilliantStar",   "MajesticWhisper",
        "MysticHarmony",    "MysticHarmony",   "CelestialJourney",
        "AzureFlame",       "InfiniteDreams",  "RadiantEcho",
        "MysticHarmony",    "InfiniteDreams",  "AzureFlame",
        "CelestialJourney", "MajesticWhisper", "CelestialJourney"};
    for (int i = 0; i < 15; i++) {
      std::cout << gamma[i] << std::endl;
    }
  }

  chiFunc();
  int thetaKappaParam = 58;

  epsilonFunc(thetaKappaParam);
}
