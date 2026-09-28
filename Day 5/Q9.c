#include <stdio.h>
#include <math.h>
int main(void){double p,r,t; scanf("%lf%lf%lf",&p,&r,&t); double si=p*r*t/100.0; double ci=p*pow(1+r/100.0,t)-p; printf("Simple Interest=%.2f, Compound Interest=%.2f\n",si,ci); return 0;}
