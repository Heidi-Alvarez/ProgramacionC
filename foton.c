#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define R 6955000    //Kilometros
#define c 300000.0  //Kilometros/segundo
#define d 15000.0   //Kilometros
#define t d/c

int main(){
 
  double theta, r;
  int i;
  double Tt, x, y, T, Tprom, Tf;


  FILE *f0, *f2, *f3, *f1, *f4, *f5, *f6, *f7, *f8, *f9;
  f1=fopen("foton_uno.dat", "w");
  f2=fopen("foton_dos.dat", "w");
  f3=fopen("foton_tres.dat", "w");
  f4=fopen("foton_cuatro.dat", "w");
  f5=fopen("foton_cinco.dat", "w");
  f6=fopen("foton_seis.dat", "w");
  f7=fopen("foton_siete.dat", "w");
  f8=fopen("foton_ocho.dat", "w");
  f9=fopen("foton_nueve.dat", "w");
  f0=fopen("foton_diez.dat", "w");

  for(i=0;i<=9;i++){
    x=0.0;
    y=0.0;
    T=0.0;
    i=i;
    do
      {
	theta=2*M_PI*drand48();
	x+=d*cos(theta);
	y+=d*sin(theta);
	T+=t;
	r=x*x+y*y;
  	if(i==0){
	  fprintf(f1, "%lf\t%lf\t%lf\n", T, x, y);
	}
	if(i==1){
	  fprintf(f2, "%lf\t%lf\t%lf\n", T, x, y);
	}
	if(i==2){
	  fprintf(f3, "%lf\t%lf\t%lf\n", T, x, y);
	}
	if(i==3){
	  fprintf(f4, "%lf\t%lf\t%lf\n", T, x, y);
	}
	if(i==4){
	  fprintf(f5, "%lf\t%lf\t%lf\n", T, x, y);
	}
	if(i==5){
	  fprintf(f6, "%lf\t%lf\t%lf\n", T, x, y);
	}
	if(i==6){
	  fprintf(f7, "%lf\t%lf\t%lf\n", T, x, y);
	}
	if(i==7){
	  fprintf(f8, "%lf\t%lf\t%lf\n", T, x, y);
	}
	if(i==8){
	  fprintf(f9, "%lf\t%lf\t%lf\n", T, x, y);
	}
	if(i==9){
	fprintf(f0, "%lf\t%lf\t%lf\n", T, x, y);
	}
      }
    while((sqrt(r))<=R);
    
    Tf+=T;
  }
    fclose(f1);
    fclose(f2);   
    fclose(f3);
    fclose(f4); 
    fclose(f5);
    fclose(f6); 
    fclose(f7);
    fclose(f8); 
    fclose(f9);
    fclose(f0); 

  Tprom=Tf/10;
  printf("\nEl tiempo promedio que demoran diez fotones en salir del Sol es tprom=%.3lf segundos\n", Tprom);
  return 0;
}
