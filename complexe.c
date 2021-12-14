#include "complexe.h"
#include<math.h>

Complexe nouveauComplexe(double r, double i){
  Complexe z;
  z.r=r;
  z.i=i;
  return z;
}

Complexe plus(Complexe z1, Complexe z2){
  return nouveauComplexe(z1.r + z2.r, z1.i + z2.i);
}

Complexe moins(Complexe z1, Complexe z2){
  return nouveauComplexe(z1.r - z2.r, z1.i - z2.i);
}

double module(Complexe z){
  return sqrt(z.r*z.r + z.i*z.i);
}

double argument(Complexe z){
  return atan(z.i/z.r);
}
