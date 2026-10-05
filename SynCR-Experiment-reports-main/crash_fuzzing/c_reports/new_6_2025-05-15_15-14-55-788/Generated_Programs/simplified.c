/* Template_12.tmpl */
/*Not similar to issue 2*/
/*This si a simple struct the issue 2 is a pointer to a struct*/
/* seems to be a new issue */
struct LargeStruct {
  int data[1000];
};

int main() {
  struct LargeStruct
      arr[100000]; 

  return 0;
}