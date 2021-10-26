#include <fputs.h>

int main(){
  char *a;
  malloc(a, 1024);
  a = "Hello, World!\n";
  fputs(a, 1);
}
