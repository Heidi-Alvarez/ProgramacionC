#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define g 9.8

int main(){

  int i, d=100, max=90, o=0;
  double v[d][2], vx[d], vy[d], t[d];

  FILE *gl,*ng;
  gl=fopen("gol.dat", "w");
  ng=fopen("no_gol.dat", "w");

  for(i=0;i<d;i++){
    v[i][0]=max*drand48();
    v[i][1]=-2*M_PI*drand48()+M_PI;
    vx[i]=v[i][0]*cos(v[i][1]);
    vy[i]=v[i][0]*sin(v[i][1]);
    t[i]=2*vy[i]/g;

    if((11<(vx[i]*t[i]))||((vx[i]*t[i])<=18.5)){
      fprintf(gl, "%d  %.2f  %.2f  %.2f  \n", o, vx[i]*t[i], v[i][0], v[i][1]);
    }
    if((vx[i]*t[i])<=11){
      fprintf(ng, "%d  %.2f  %.2f  %.2f  \n", o, vx[i]*t[i], v[i][0], v[i][1]);
    }
  }
    return 0;
}
