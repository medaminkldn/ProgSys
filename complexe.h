typedef struct{
  double r;
  double i;
}Complexe;

Complexe nouveauComplexe(double r, double i);
Complexe plus(Complexe z1, Complexe z2);
Complexe moins(Complexe z1, Complexe z2);
double module(Complexe z);
double argument(Complexe z);
