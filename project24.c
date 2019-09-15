#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"


int main(void)
{

int len=100;
//For finding the data for plotting circle
double** theta = linspace(0,2*M_PI,len);
double r = 4;
double** x = createMat(1,len);
double** y = createMat(1,len);

for (int i=0; i<len; i++){
	x[0][i] = r*cos(*theta[i]);
	y[0][i] = r*sin(*theta[i]);
 
}


savetxt(x,"x.dat",1,len);
savetxt(y,"y.dat",1,len);

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
//saving data for lines
//line1
double**A1=createMat( 2, 1);
A1[0][0]=4;A1[1][0]=0;
double**B1=createMat( 2, 1);
B1[0][0]=0;B1[1][0]=4;
double**A1B1=line_gen(A1,B1);
savetxt(A1,"A1.dat",2,1);
savetxt(B1,"B1.dat",2,1);
savetxt(A1B1,"A1B1.dat",2,len);
//line2
double**A2=createMat( 2, 1);
A2[0][0]=5;A2[1][0]=0;
double**B2=createMat( 2, 1);
B2[0][0]=0;B2[1][0]=5;
double**A2B2=line_gen(A2,B2);
savetxt(A2,"A2.dat",2,1);
savetxt(B2,"B2.dat",2,1);
savetxt(A2B2,"A2B2.dat",2,len);
//line3
double**A3=createMat( 2, 1);
A3[0][0]=-5;A3[1][0]=0;
double**B3=createMat( 2, 1);
B3[0][0]=0;B3[1][0]=-5;
double**A3B3=line_gen(A3,B3);
savetxt(A3,"A3.dat",2,1);
savetxt(B3,"B3.dat",2,1);
savetxt(A3B3,"A3B3.dat",2,len);
//line4
double**A4=createMat( 2, 1);
A4[0][0]=-4;A4[1][0]=0;
double**B4=createMat( 2, 1);
B4[0][0]=0;B4[1][0]=-4;
double**A4B4=line_gen(A4,B4);
savetxt(A4,"A4.dat",2,1);
savetxt(B4,"B4.dat",2,1);
savetxt(A4B4,"A4B4.dat",2,len);
//line5
double**A5=createMat( 2, 1);
A5[0][0]=4;A5[1][0]=-3;
double**B5=createMat( 2, 1);
B5[0][0]=-4;B5[1][0]=5;
double**A5B5=line_gen(A5,B5);
savetxt(A5,"A5.dat",2,1);
savetxt(B5,"B5.dat",2,1);
savetxt(A5B5,"A5B5.dat",2,len);
//line6
double**A6=createMat( 2, 1);
A6[0][0]=-4;A6[1][0]=3;
double**B6=createMat( 2, 1);
B6[0][0]=4;B6[1][0]=-5;
double**A6B6=line_gen(A6,B6);
savetxt(A6,"A6.dat",2,1);
savetxt(B6,"B6.dat",2,1);
savetxt(A6B6,"A6B6.dat",2,len);
//line7
double**A7=createMat( 2, 1);
A7[0][0]=2*sqrt(2);A7[1][0]=-2*sqrt(2);
double**B7=createMat( 2, 1);
B7[0][0]=-2*sqrt(2);B7[1][0]=2*sqrt(2);
double**A7B7=line_gen(A7,B7);
savetxt(A7,"A7.dat",2,1);
savetxt(B7,"B7.dat",2,1);
savetxt(A7B7,"A7B7.dat",2,len);
//line8
double**A8=createMat( 2, 1);
A8[0][0]=-4;A8[1][0]=2;
double**B8=createMat( 2, 1);
B8[0][0]=4;B8[1][0]=-6;
double**A8B8=line_gen(A8,B8);
savetxt(A8,"A8.dat",2,1);
savetxt(B8,"B8.dat",2,1);
savetxt(A8B8,"A8B8.dat",2,len);
//line9
double**A9=createMat( 2, 1);
A9[0][0]=4;A9[1][0]=-2;
double**B9=createMat( 2, 1);
B9[0][0]=-4;B9[1][0]=6;
double**A9B9=line_gen(A9,B9);
savetxt(A9,"A9.dat",2,1);
savetxt(B9,"B9.dat",2,1);
savetxt(A9B9,"A9B9.dat",2,len);
//line10
double**A10=createMat( 2, 1);
A10[0][0]=-4;A10[1][0]=7;
double**B10=createMat( 2, 1);
B10[0][0]=4;B10[1][0]=-1;
double**A10B10=line_gen(A10,B10);
savetxt(A10,"A10.dat",2,1);
savetxt(B10,"B10.dat",2,1);
savetxt(A10B10,"A10B10.dat",2,len);
//line11
double**A11=createMat( 2, 1);
A11[0][0]=4;A11[1][0]=-7;
double**B11=createMat( 2, 1);
B11[0][0]=-4;B11[1][0]=1;
double**A11B11=line_gen(A11,B11);
savetxt(A11,"A11.dat",2,1);
savetxt(B11,"B11.dat",2,1);
savetxt(A11B11,"A11B11.dat",2,len);

return 0;
}
