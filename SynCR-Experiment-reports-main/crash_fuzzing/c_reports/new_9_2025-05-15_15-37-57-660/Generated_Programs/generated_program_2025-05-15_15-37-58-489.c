/*Template_8.tmpl*/
/*TRIGGER ICES*/

struct Deep {
  struct Deep *next;
};

int main() {
  char gamma = 'b';

  if (true) {

    while (true) {
      printf("This is a sample print statement");
    }
  }

  else {

    for (int i = 0; i < 0; i++) {
      int alphaTau = 10 * 12;
    }
  }

  int upsilonPhi[13] = {13, 7, 4, 14, 2, 20, 8, 20, 10, 2, 14, 13, 14};
  for (int i = 0; i < 13; i++) {
    printf("%d\n", upsilonPhi[i]);
  }

  int kl = 10;
  do {
    double phiPrime[9] = {
        14.0, 18.0, 2.0, 20.0, 57.03284659322387, 31.86168659537727,
        11.0, 19.0, 11.0};
    for (int i = 0; i < 9; i++) {
      printf("%lf", phiPrime[i]);
    }
    kl++;
  }

  while (kl > 15);

  for (int i = 10; i <= 20; i++) {
    printf("Entering main loop");
  }

  struct Deep d[10000]; /* This may cause an internal compiler error due to deep
                           nesting */
  return 0;
}