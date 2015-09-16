#include <stdio.h>
#include "test.h"

int main(){
  int x,y;

  x = 5;
  y = testFunction(x);
  printf("y = %i\n", y);
  return 0;
}

int testFunction(n){
  int add, b;

  add = 5;
  b = add + n;

  return b;
}
