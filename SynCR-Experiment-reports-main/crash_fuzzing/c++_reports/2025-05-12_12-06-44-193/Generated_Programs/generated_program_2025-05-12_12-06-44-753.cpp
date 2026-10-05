// Template_17.tmpl
// Triggers ICE
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=118388
#include <iostream>

using namespace std;

template <typename T> struct X {
  typedef int value;
  int compute();
  struct Y {};
  struct Z : Y {
    int process() {
      auto result = [&]() { return compute(); }();
      return result;
    }
  };
};

template <> struct X<int>::Y : X<int> {}; // Specialized base class

// Function definitions
bool chiFunc() {
  std::cout << "This is a sample print statement" << std::endl;
  return true;
}

double etaFunc() {
  std::printf("This is a sample print statement");
  return 0.0;
}

int main() {
  X<int>::Z instance;
  X<int>::value v = instance.process();
  std::cout << "Processed value: " << v << std::endl;

  chiFunc();
  etaFunc();
  bool chiTheta = false;

  if (false) {
    double mu = 6 - 2;
  }

  else {
    int kl = 0;
    do {
      int eta = 16 / 4;
      kl++;
    }

    while (kl <= 5);
  }

  return 0;
}
