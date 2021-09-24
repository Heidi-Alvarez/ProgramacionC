#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//Este programa calcula si una matriz de 3x3 es idenpotente

double ALEATORIO(){

  int n=3, i, j, k;
  double ma[n][n], mp[n][n];
  double v[n];
  
  srand(time(NULL));
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){	 
      v[j]=rand()%123;
      ma[i][j]=v[j];
      for(k=0;k<n;k++){
	mp[i][j]+=ma[i+k][j]*ma[i][j+k];
      }
    }
  }
  if((ma[n][n])==(mp[n][n])){
    printf("La matriz A es idenpotente\n");
    printf("\n\tMATRIZ A \t\t=\t\tMATRIZ A*A");
    printf("\n\n\t%3.0lf %3.0lf %3.0lf \t\t \t\t%3.0lf  %3.0lf  %3.0lf \n\t%3.0lf  %3.0lf  %3.0lf \t\t \t\t%3.0lf  %3.0lf  %3.0lf \n\t%3.0lf  %3.0lf  %3.0lf \t\t \t\t%3.0lf  %3.0lf  %3.0lf \n",ma[0][0], ma[0][1], ma[0][2],mp[0][0], mp[0][1], mp[0][2], ma[1][0], ma[1][1], ma[1][2],mp[1][0], mp[1][1], mp[1][2],ma[2][0], ma[2][1], ma[2][2],mp[2][0], mp[2][1], mp[2][2]);
  }

  else{ 
    printf("La matriz A no es idenpotente\n");
    printf("\n\tMATRIZ A \t\t \t\tMATRIZ A*A\n\n\t%3.0lf %3.0lf %3.0lf \t\t \t\t%3.0lf  %3.0lf  %3.0lf \n\t%3.0lf  %3.0lf  %3.0lf \t\t \t\t%3.0lf  %3.0lf  %3.0lf \n\t%3.0lf  %3.0lf  %3.0lf \t\t \t\t%3.0lf  %3.0lf  %3.0lf \n",ma[0][0], ma[0][1], ma[0][2],mp[0][0], mp[0][1], mp[0][2], ma[1][0], ma[1][1], ma[1][2],mp[1][0], mp[1][1], mp[1][2],ma[2][0], ma[2][1], ma[2][2],mp[2][0], mp[2][1], mp[2][2]);
  }
}

double USUARIO(){

  int i, j, k, n=3;
  double ma[n][n], mp[n][n];

  printf("Ingrese las componentes de la matriz A\n");
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%lf",&ma[i][j]);
    }
  }
 
  printf("\n MATRIZ A\n\n");
  printf("%.0lf  %.0lf  %.0lf  \n%.0lf  %.0lf  %.0lf  \n%.0lf  %.0lf  %.0lf  \n", ma[0][0], ma[0][1], ma[0][2], ma[1][0], ma[1][1], ma[1][2], ma[2][0], ma[2][1], ma[2][2]);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      for(k=0;k<n;k++){
	mp[i][j]+=ma[i+k][j]*ma[i][j+k];
      }
    }
  }
 
  if((ma[n][n])==(mp[n][n])){
    printf("La matriz A es idenpotente\n");
    printf("\n\tMATRIZ A \t\t=\t\tMATRIZ A*A\n\n\t%3.0lf %3.0lf %3.0lf \t\t \t\t%3.0lf  %3.0lf  %3.0lf \n\t%3.0lf  %3.0lf  %3.0lf \t\t \t\t%3.0lf  %3.0lf  %3.0lf \n\t%3.0lf  %3.0lf  %3.0lf \t\t \t\t%3.0lf  %3.0lf  %3.0lf \n",ma[0][0], ma[0][1], ma[0][2],mp[0][0], mp[0][1], mp[0][2], ma[1][0], ma[1][1], ma[1][2],mp[1][0], mp[1][1], mp[1][2],ma[2][0], ma[2][1], ma[2][2],mp[2][0], mp[2][1], mp[2][2]);
  }
  
  else{ 
    printf("La matriz A no es idenpotente\n");
    printf("\n\tMATRIZ A \t\t \t\tMATRIZ A*A\n\n\t%3.0lf %3.0lf %3.0lf \t\t \t\t%3.0lf  %3.0lf  %3.0lf \n\t%3.0lf  %3.0lf  %3.0lf \t\t \t\t%3.0lf  %3.0lf  %3.0lf \n\t%3.0lf  %3.0lf  %3.0lf \t\t \t\t%3.0lf  %3.0lf  %3.0lf \n",ma[0][0], ma[0][1], ma[0][2],mp[0][0], mp[0][1], mp[0][2], ma[1][0], ma[1][1], ma[1][2],mp[1][0], mp[1][1], mp[1][2],ma[2][0], ma[2][1], ma[2][2],mp[2][0], mp[2][1], mp[2][2]);
  }

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
