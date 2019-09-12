#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs1.h"
int main(void)
{
//Defining the direction vector of the normal of the given lines
double**P=createMat( 2, 1);
P[0][0]=1;P[1][0]=1;
printf("P=\n");
print(P,2,1);
//Defining the omat matrix
double**omat=createMat( 2, 2);
omat[0][0]=0;omat[0][1]=1;
omat[1][0]=-1;omat[1][1]=0;
printf("omat=\n");
print(omat,2,2);
//finding the direction vector of the given line
double **m=matmul(omat,P,2,2,1);
printf("m=\n");
print(m ,2,1);
//Finding the point of intersections
double**s=createMat( 2, 2);
s[0][0]=-1;s[0][1]=1;
s[1][0]=1;s[1][1]=1;
double **j=linalg_inv( s, 2);
double**k1=createMat( 2, 1);
k1[0][0]=0;k1[1][0]=5;
double **T1=matmul(j,k1,2,2,1);
printf("T1=\n");
print(T1,2,1);
double**k2=createMat( 2, 1);
k2[0][0]=0;k2[1][0]=4;
double **T2=matmul(j,k2,2,2,1);
printf("T2=\n");
print(T2,2,1);
double**k3=createMat( 2, 1);
k3[0][0]=0;k3[1][0]=3;
double **T3=matmul(j,k3,2,2,1);
printf("T3=\n");
print(T3,2,1);
double**k4=createMat( 2, 1);
k4[0][0]=0;k4[1][0]=2;
double **T4=matmul(j,k4,2,2,1);
printf("T4=\n");
print(T4,2,1);
double**k5=createMat( 2, 1);
k5[0][0]=0;k5[1][0]=1;
double **T5=matmul(j,k5,2,2,1);
printf("T5=\n");
print(T5,2,1);
double**k6=createMat( 2, 1);
k6[0][0]=0;k6[1][0]=0;
double **T6=matmul(j,k6,2,2,1);
printf("T6=\n");
print(T6,2,1);
//Finding their distances of line from centre
double d1=linalg_norm(T1,2);
printf("d1=");printf("%lf\n",d1);
double d2=linalg_norm(T2,2);
printf("d2=");printf("%lf\n",d2);
double d3=linalg_norm(T3,2);
printf("d3=");printf("%lf\n",d3);
double d4=linalg_norm(T4,2);
printf("d4=");printf("%lf\n",d4);
double d5=linalg_norm(T5,2);
printf("d5=");printf("%lf\n",d5);
double d6=linalg_norm(T6,2);
printf("d6=");printf("%lf\n",d6);
//Finding the length of the intercepts
double l1=2*sqrt(4*4-d1*d1);
printf("l1=");printf("%lf\n",l1);
double l2=2*sqrt(4*4-d2*d2);
printf("l2=");printf("%lf\n",l2);
double l3=2*sqrt(4*4-d3*d3);
printf("l3=");printf("%lf\n",l3);
double l4=2*sqrt(4*4-d4*d4);
printf("l4=");printf("%lf\n",l4);
double l5=2*sqrt(4*4-d5*d5);
printf("l5=");printf("%lf\n",l5);
double l6=2*sqrt(4*4-d6*d6);
printf("l6=");printf("%lf\n",l6);
//Finding the sum of the squares of the intercepts
double S=(l1*l1+l2*l2+l3*l3+l4*l4+l5*l5)*2+l6*l6;
printf("S=");printf("%lf\n",S);
return 0;
}

#include <stdlib.h>
#include <math.h>
#include "coeffs1.h"
int main(void)
{
//Defining the direction vector of the normal of the given lines
double**P=createMat( 2, 1);
P[0][0]=1;P[1][0]=1;
printf("P=\n");
print(P,2,1);
//Defining the omat matrix
double**omat=createMat( 2, 2);
omat[0][0]=0;omat[0][1]=1;
omat[1][0]=-1;omat[1][1]=0;
printf("omat=\n");
print(omat,2,2);
//finding the direction vector of the given line
double **m=matmul(omat,P,2,2,1);
printf("m=\n");
print(m ,2,1);
//Finding the point of intersections
double**s=createMat( 2, 2);
s[0][0]=-1;s[0][1]=1;
s[1][0]=1;s[1][1]=1;
double **j=linalg_inv( s, 2);
double**k1=createMat( 2, 1);
k1[0][0]=0;k1[1][0]=5;
double **T1=matmul(j,k1,2,2,1);
printf("T1=\n");
print(T1,2,1);
double**k2=createMat( 2, 1);
k2[0][0]=0;k2[1][0]=4;
double **T2=matmul(j,k2,2,2,1);
printf("T2=\n");
print(T2,2,1);
double**k3=createMat( 2, 1);
k3[0][0]=0;k3[1][0]=3;
double **T3=matmul(j,k3,2,2,1);
printf("T3=\n");
print(T3,2,1);
double**k4=createMat( 2, 1);
k4[0][0]=0;k4[1][0]=2;
double **T4=matmul(j,k4,2,2,1);
printf("T4=\n");
print(T4,2,1);
double**k5=createMat( 2, 1);
k5[0][0]=0;k5[1][0]=1;
double **T5=matmul(j,k5,2,2,1);
printf("T5=\n");
print(T5,2,1);
double**k6=createMat( 2, 1);
k6[0][0]=0;k6[1][0]=0;
double **T6=matmul(j,k6,2,2,1);
printf("T6=\n");
print(T6,2,1);
//Finding their distances of line from centre
double d1=linalg_norm(T1,2);
printf("d1=");printf("%lf\n",d1);
double d2=linalg_norm(T2,2);
printf("d2=");printf("%lf\n",d2);
double d3=linalg_norm(T3,2);
printf("d3=");printf("%lf\n",d3);
double d4=linalg_norm(T4,2);
printf("d4=");printf("%lf\n",d4);
double d5=linalg_norm(T5,2);
printf("d5=");printf("%lf\n",d5);
double d6=linalg_norm(T6,2);
printf("d6=");printf("%lf\n",d6);
//Finding the length of the intercepts
double l1=2*sqrt(4*4-d1*d1);
printf("l1=");printf("%lf\n",l1);
double l2=2*sqrt(4*4-d2*d2);
printf("l2=");printf("%lf\n",l2);
double l3=2*sqrt(4*4-d3*d3);
printf("l3=");printf("%lf\n",l3);
double l4=2*sqrt(4*4-d4*d4);
printf("l4=");printf("%lf\n",l4);
double l5=2*sqrt(4*4-d5*d5);
printf("l5=");printf("%lf\n",l5);
double l6=2*sqrt(4*4-d6*d6);
printf("l6=");printf("%lf\n",l6);
//Finding the sum of the squares of the intercepts
double S=(l1*l1+l2*l2+l3*l3+l4*l4+l5*l5)*2+l6*l6;
printf("S=");printf("%lf\n",S);
return 0;
}
