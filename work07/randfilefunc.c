#include "randfilefunc.h"

void numGen(int[] a){
  int i = 0;
  while(i-- < 10){
    a[i] = rand();
    printf("Random %d: %d\n", i, a[i]);
  }
}
 
