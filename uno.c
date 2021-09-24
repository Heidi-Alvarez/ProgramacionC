#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define R 6955000
#define c 300000.0
#define d 500.0
#define t d/c

int main(){
 
  double theta, r;
  int i;
  double Tt, x, y, T, Tprom, Tf;


  FILE *f0, *f2;
  f0=fopen("foton_uno_bla.dat", "w");
  f2=fopen("foton_dos_bla.dat", "w");


  for(i=0;i<=1;i++){
    x=0.0;
    y=0.0;
    T=0.0;
    i=i;
    printf("%d",i);
    do
      {
	i=i;
	theta=2*M_PI*drand48();
	x+=d*cos(theta);
	y+=d*sin(theta);
	T+=t;
	r=x*x+y*y;
  	if(i==0){
	  printf("%lf %lf %lf\n", T, x, y); 
	  fprintf(f0, "%lf %lf %lf\n", T, x, y);
	}
	if(i==1){
	  printf("%lf %lf %lf\n", T, x, y);
	  fprintf(f2, "%lf %lf %lf\n", T, x, y);
	}
      }
    while((sqrt(r))<=R);
    
    Tf+=T;
  }

  fclose(f0);
  fclose(f2);  
  Tprom=Tf/2;
  printf("\nEl tiempo promedio que demoran diez fotones en salir del Sol es tprom=%.3lf segundos\n", Tprom);
  return 0;
}
