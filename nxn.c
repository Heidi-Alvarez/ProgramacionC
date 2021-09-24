#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main(){

  int n=4, i, j;
  double v[n];
  double ma[n][n], mb[n][n], ms[n][n];
 
  printf("\n\t\tLa matriz a es\n\n");
  srand(time(NULL));
  for(i=0;i<n-2;i++){
    for(j=0;j<n-2;j++){
      v[j]=rand()%100;
      ma[i][j]=v[j];
      printf("\t%.2lf\t %.2lf\t %.2lf\t %.2lf\n", ma[i][j],  ma[i][j],  ma[i][j], ma[i][j]);
    }
  }
  printf("\n\n\n\t\tLa matriz b es \n\n");
 srand(time(NULL));
  for(i=0;i<n-2;i++){
    for(j=0;j<n-2;j++){
      v[j]=rand()%55;
      mb[i][j]=v[j];
      printf("\t%.2lf\t %.2lf\t %.2lf\t %.2lf\n", mb[i][j],  mb[i][j],  mb[i][j], mb[i][j]);
    }
  }

  printf("\n\n\n\tLa suma de ambas matrices es\n\n");
  for(i=0;i<n-2;i++){
    for(j=0;j<n-2;j++){
      ms[i][j]=ma[i][j]+mb[i][j];
      printf("\t%.2lf\t %.2lf\t %.2lf\t %.2lf\n", ms[i][j], ms[i][j], ms[i][j], ms[i][j]);
    }
  }
  printf("\n\n\n");
  return 0;
}

