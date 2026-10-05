/* Template_10.tmpl */
/*Triggers ICE*/
/* templates not availabe in c and causes and error but compiler has not handed such errors */
/* https://github.com/llvm/llvm-project/issues/64462 similar issue */
/* https://discourse.llvm.org/t/recursive-template-instantiation-exceeded-maximum-depth-of-1024/49117 - simiar issues */
/*todo report*/
template <int N, int M> struct Nested {
  Nested<N - 1, M> next;
};

template <int M> struct Nested<0, M> {};

int main() {


  Nested<100, 200>
      n; 
  return 0;
}