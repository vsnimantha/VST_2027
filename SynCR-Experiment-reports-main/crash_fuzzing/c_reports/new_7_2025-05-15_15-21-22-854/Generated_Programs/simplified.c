/* Template_11.tmpl */
/* TRIGGER ICES */
/*There are similarities with new 2 but recursive struct only declares a single instance while in issue
2 SelfRef declares an array of 100000 instances*/
/*new issue and todo report */
struct Recursive {
  struct Recursive *next;
  int data[1000];
};


int main() {
  struct Recursive r; 
  return 0;
}