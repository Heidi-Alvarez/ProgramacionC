#include<stdio.h>
#include<math.h>

//Este programa dados dos vectores n-dimensiones si son LI o LD//

int main(){

  int n, i, j, k;
  float x, y, z, w, v, s;

  printf("Ingrese la dimensión de los vectores\n");
  scanf("%d", &n);

  float v1[n-1], v2[n-1], c[n-1];
 
  printf("Ingrese las componentes del primer vector y luego las del segundo\n");
  for(i=0;i<n;i++){
    scanf("%f", &v1[i]);
    }

  printf("Ingrese las componentes del segundo vector\n");
    for(j=0;j<n;j++){
    scanf("%f", &v2[j]);
    }

    printf("Los vectores son\n\n\tV1\tV2\n");
      for(i=0;i<n;i++){
	printf("\t%.0f\t%.0f\n", v1[i], v2[i]);
      }

      for(k=0;k<n;k++){
	x=v1[k];
	y=v2[k];
	z=x/y;
	c[k]=z;
      }

      v=0;
      for(i=0;i<n;i++){
	w=c[i];
	v+=w;
      }
      s=v/n;

      if(s==w){
	printf("\nLos vectores son Linealmente Dependientes\n");
      }
      if(s!=w){
	printf("\nLos vectores son Linealmente Independientes\n");
      }

      return 0;
}

      


