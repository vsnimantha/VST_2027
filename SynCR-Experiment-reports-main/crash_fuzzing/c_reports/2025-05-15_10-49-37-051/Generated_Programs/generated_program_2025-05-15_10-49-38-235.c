/* Template_18.tmpl */
/* Clang Bug*/
/*https://github.com/llvm/llvm-project/issues/129873*/
#include <stdio.h>

extern struct rq *__task_rq_lock(struct task_struct *p, struct rq_flags *rf)
    __attribute__((acquire_capability((&(*({
                                        do {
                                        } while (0);
                                        ({});
                                      }))) -> __lock)));
extern struct rq *__task_rq_lock(struct task_struct *p, struct rq_flags *rf)
    __attribute__((acquire_capability((&(*({
                                        do {
                                        } while (0);
                                        ({});
                                      }))) -> __lock)));

double phiPrimeFunc() {
  float xi = 8.0f;
  return 28.246196119213785;
}

void zetaPrimeFunc(string betaTauParam, float alphaParam, double gammaParam) {
  int kl = 0;
  do {
    int zetaEta = 14 - 15;
    kl++;
  }

  while (kl <= 0);
  printf(betaTauParam);
  printf(alphaParam - gammaParam);
}

int main() {
  phiPrimeFunc();
  string betaTauParam = "LN9P0KCCEA";
  float alphaParam = 48.710120983265206f;
  double gammaParam = 47.38127192635151;

  zetaPrimeFunc(betaTauParam, alphaParam, gammaParam);
  printf("This is a sample print statement");

  char thetaIota = 'z';

  if (true) {
    double piEta = 17.0;
  }

  else {

    for (int i = 15; i < 10; i++) {
      printf("This is a sample print statement");
    }
  }

  char upsilonGamma[12] = {'z', 'i', 'M', 'z', 'o', 'a',
                           'H', 'z', 'I', 'L', 'r', 'w'};
  for (int i = 0; i < 12; i++) {
    printf("%c", upsilonGamma[i]);
  }

  int kl = 10;
  do {
    char lambdaPrime[20] = {'s', 'd', 'G', 'X', 'O', 'l', 'C', 'G', 's', 'g',
                            'p', 'Z', 'U', 'L', 'M', 'R', 'H', 'j', 'I', 'd'};
    for (int i = 0; i < 20; i++) {
      printf("%c", lambdaPrime[i]);
    }
    kl++;
  }

  while (kl >= 20);

  for (int i = 0; i <= 10; i++) {
    double xiRho = 19 * 5;
  }

  return 0;
}
