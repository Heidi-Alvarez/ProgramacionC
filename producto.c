#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//Este programa calcula el producto de dos matrices 3x3

double ALEATORIO(){

  int n=3, i, j, k;
  double ma[n][n], mb[n][n], mp[n][n];
  double v[n], v1[n];
  
  srand(time(NULL));
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){	 
      v[j]=rand()%123;
      mb[i][j]=v[j];
      v1[j]=rand()%147;
      ma[i][j]=v1[j];
      for(k=0;k<n;k++){
	mp[i][j]+=ma[i+k][j]*mb[i][j+k];
      }
    }
  }
 
  printf("\n\t  MATRIZ A\t\t  MATRIZ B\t\t  PRODUCTO A*B\t\n\n\t%3.0lf %3.0lf %3.0lf \t\t%3.0lf  %3.0lf  %3.0lf \t\t%3.0lf  %3.0lf  %3.0lf \n\t%3.0lf  %3.0lf  %3.0lf \t\t%3.0lf  %3.0lf  %3.0lf \t\t%3.0lf  %3.0lf  %3.0lf \n\t%3.0lf  %3.0lf  %3.0lf \t\t%3.0lf  %3.0lf  %3.0lf \t\t%3.0lf  %3.0lf  %3.0lf \n\n",ma[0][0], ma[0][1], ma[0][2],mb[0][0], mb[0][1], mb[0][2],mp[0][0], mp[0][1], mp[0][2], ma[1][0], ma[1][1], ma[1][2],mb[1][0], mb[1][1], mb[1][2],mp[1][0], mp[1][1], mp[1][2],ma[2][0], ma[2][1], ma[2][2],mb[2][0], mb[2][1], mb[2][2],mp[2][0], mp[2][1], mp[2][2]);
}  

double USUARIO(){

  int i, j, k, n=3;
  double ma[n][n], mb[n][n], mp[n][n];

  printf("Ingrese las componentes de la matriz A\n");
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%lf",&ma[i][j]);
    }
  }
 
  printf("\n MATRIZ A\n\n");
  printf("%.0lf  %.0lf  %.0lf  \n%.0lf  %.0lf  %.0lf  \n%.0lf  %.0lf  %.0lf  \n", ma[0][0], ma[0][1], ma[0][2], ma[1][0], ma[1][1], ma[1][2], ma[2][0], ma[2][1], ma[2][2]);

  printf("Ingrese las componentes de la matriz B\n");
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%lf",&mb[i][j]);
    }
  }

  printf("\n MATRIZ B\n\n");
  printf("%.0lf  %.0lf  %.0lf  \n%.0lf  %.0lf  %.0lf  \n%.0lf  %.0lf  %.0lf  \n", mb[0][0], mb[0][1], mb[0][2], mb[1][0], mb[1][1], mb[1][2], mb[2][0], mb[2][1], mb[2][2]);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      for(k=0;k<n;k++){
	mp[i][j]+=ma[i+k][j]*mb[i][j+k];
      }
    }
  }
 
printf("\n\t   MATRIZ A\t\t   MATRIZ B\t\t   PRODUCTO A*B\t\n\n\t%3.0lf %3.0lf %3.0lf \t\t%3.0lf  %3.0lf  %3.0lf \t\t%3.0lf  %3.0lf  %3.0lf \n\t%3.0lf  %3.0lf  %3.0lf \t\t%3.0lf  %3.0lf  %3.0lf \t\t%3.0lf  %3.0lf  %3.0lf \n\t%3.0lf  %3.0lf  %3.0lf \t\t%3.0lf  %3.0lf  %3.0lf \t\t%3.0lf  %3.0lf  %3.0lf \n\n",ma[0][0], ma[0][1], ma[0][2],mb[0][0], mb[0][1], mb[0][2],mp[0][0], mp[0][1], mp[0][2], ma[1][0], ma[1][1], ma[1][2],mb[1][0], mb[1][1], mb[1][2],mp[1][0], mp[1][1], mp[1][2],ma[2][0], ma[2][1], ma[2][2],mb[2][0], mb[2][1], mb[2][2],mp[2][0], mp[2][1], mp[2][2]);


}

int main(){

  char eleccion[10];
  int n=3, i, j;
  double mp[n][n], ma[n][n], mb[n][n];

  printf("Este programa calcula el producto de dos matrices 3x3 ¿desea hacerlo con entradas aleatorias o ingresarlas? (Aleatorio o Ingresar)\n");
  scanf("%s", eleccion);

  if(strcmp(eleccion, "Aleatorio")==0){
    mp[n][n]=ALEATORIO();
  }

  if(strcmp(eleccion, "Ingresar")==0){
    mp[n][n]=USUARIO();
  }

  return 0;
}
