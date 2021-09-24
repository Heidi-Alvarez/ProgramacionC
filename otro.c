#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include</home/heidi/Preparación/fotón.c>

int main(){

  double Tt, x, y, T, foton, tprom, t1, t2, t3, t4, t5, t6, t7, t8, t9, t0;


  FILE *f0, *f2, *f3, *f1, *f4, *f5, *f6, *f7, *f8, *f9;
  //  f1=fopen("foton_uno.dat", "w");
  f2=fopen("foton_dos.dat", "w");
  /* f3=fopen("foton_tres.dat", "w");
  f4=fopen("foton_cuatro.dat", "w");
  f5=fopen("foton_cinco.dat", "w");
  f6=fopen("foton_seis.dat", "w");
  f7=fopen("foton_siete.dat", "w");
  f8=fopen("foton_ocho.dat", "w");
  f9=fopen("foton_nueve.dat", "w");
  f0=fopen("foton_diez.dat", "w");
  */
  FOTON();{
    fprintf(f2, "&lf &lf $lf", T, x, y);
    t1=Tt;
  }
  fclose(f2);

  return 0;
}
