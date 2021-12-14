#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "complexe.h"

int main(){
  Complexe z1, z2, z3;
  z1=nouveauComplexe(1,0);
  z2=nouveauComplexe(0,1);
  z3=plus(z1,z2);
  printf("Le module de %f+i%f est : %f\n", z3.r ,z3.i, module(z3));
  printf("L'argument de %f+i%f est : %f\n", z3.r ,z3.i, argument(z3));
  return EXIT_SUCCESS;
}