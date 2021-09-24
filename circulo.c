#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int i, Npuntos=10000;
  double radio=1.0;
  double r[Npuntos][2], rc[Npuntos][2], rc_sep[Npuntos][2];
  double dummy;

  //================================
  //Creacion del circulo inicial
  //================================

  FILE *pf;
  pf=fopen("circulo_inicial.dat", "w");   

  //Usando x=rcos(theta) y y=rsin(theta)

  for(i=0;i<Npuntos;i++){
    r[i][0]=radio*drand48();
    r[i][1]=2.0*M_PI*drand48();

    rc[i][0]=r[i][0]*cos(r[i][1]);
    rc[i][1]=r[i][0]*sin(r[i][1]);

    fprintf(pf,"%lf %lf %lf %lf\n",r[i][0],r[i][1],rc[i][0],rc[i][1]);
   
  }

    fclose(pf);

    //=========================================
    //Creo dos circulos a partir del primero
    //=========================================

    FILE *pf2, *pf3;
    pf2=fopen("circulo_inicial.dat","r");
    pf3=fopen("circulo_inicial_separado.dat", "w");

    for(i=0;i<Npuntos;i++){
      fscanf(pf2, "%lf %lf %lf %lf",&dummy, &dummy, &rc_sep[i][0], &rc_sep[i][1]);
      if(i<Npuntos/2){

	rc_sep[i][0]=rc_sep[i][0]+1.5;
	rc_sep[i][1]=rc_sep[i][1]+1.5;

      }
      fprintf(pf3, "%lf %lf\n", rc_sep[i][0], rc_sep[i][1]);
    }

    fclose(pf2);
    fclose(pf3);

    //=================================================
    //Separo los dos circulos en archivos diferentes
    //=================================================

    FILE *a1, *a2;
    a1=fopen("archivo_uno.dat", "w");
    a2=fopen("archivo_dos.dat", "w");

    for(i=0;i<Npuntos;i++){
      if(sqrt(pow(rc_sep[i][0],2)+pow(rc_sep[i][1],2))<=1){
	fprintf(a1, "%lf %lf\n", rc_sep[i][0], rc_sep[i][1]);
    }
    else{
	fprintf(a2, "%lf %lf\n", rc_sep[i][0], rc_sep[i][1]);
      }
    }
    fclose(a1);
    fclose(a2);

  return 0;
}

