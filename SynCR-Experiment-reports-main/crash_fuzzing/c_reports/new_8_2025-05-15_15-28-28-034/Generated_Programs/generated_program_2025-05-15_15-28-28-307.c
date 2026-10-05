/* Template_10.tmpl */
/*Triggers ICE*/
template <int N, int M> struct Nested {
  Nested<N - 1, M> next;
};

template <int M> struct Nested<0, M> {};

int chetFunc() {
  double etaIota = 11.0;
  return 0;
}

int main() {
  chetFunc();

  while (true) {
    int xi = 17 - 7;
  }

  Nested<100, 200>
      n; /* This may cause an internal compiler error due to deep nesting */
  return 0;
}