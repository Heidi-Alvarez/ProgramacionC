#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include</home/heidi/Preparación/fotón.c>

int main(){

  double Tt, x, y, T, foton, tprom, t1, t2, t3, t4, t5, t6, t7, t8, t9, t0;


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

  fonton=FOTON();{
    fprintf(f1, "&lf &lf $lf", T, x, y);
    t1=Tt;
  }
  fonton=FOTON();{
    fprintf(f2, "&lf &lf $lf", T, x, y);
    t2=Tt;
  }
  fonton=FOTON();{
    fprintf(f3, "&lf &lf $lf", T, x, y);
    t3=Tt;
  }
  fonton=FOTON();{
    fprintf(f4, "&lf &lf $lf", T, x, y);
    t4=Tt;
  }
  fonton=FOTON();{
  fprintf(f5, "&lf &lf $lf", T, x, y);
  t5=Tt;
  }
  fonton=FOTON();{
  fprintf(f6, "&lf &lf $lf", T, x, y);
  t6=Tt;
  }
  fonton=FOTON();{
  fprintf(f7, "&lf &lf $lf", T, x, y);
  t7=Tt;
  }
  fonton=FOTON();{
  fprintf(f8, "&lf &lf $lf", T, x, y);
  t8=Tt;
  }
  fonton=FOTON();{
    fprintf(f9, "&lf &lf $lf", T, x, y);
    t9=Tt;
  }
  fonton=FOTON();{
  fprintf(f0, "&lf &lf $lf", T, x, y);
  t0=Tt;
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

  tprom=(t1+t2+t3+t4+t5+t6+t7+t8+t9+t0)/10.0;

  printf("\nEl tiempo promedio que demoran diez fotones en salir del Sol es tprom=%.5lf segundos\n", tprom);

  return 0;
}
