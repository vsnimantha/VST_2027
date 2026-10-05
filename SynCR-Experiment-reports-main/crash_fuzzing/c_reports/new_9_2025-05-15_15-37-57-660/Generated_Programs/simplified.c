/*Template_8.tmpl*/
/*TRIGGER ICES*/
/*SelfRef consumes far more memory because each struct contains a large array (data[1000]), whereas Deep only has a pointer*/
/*Similar to 2 but there is a slight difference as mentioned in the above one*/

struct Deep {
  struct Deep *next;
};

int main() {

  struct Deep d[10000]; 
  return 0;
}