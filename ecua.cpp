#include <stdio.h>
#include <stdlib.h>

#define N 3
#define NU 2
/*
double xa,ya,ra,xb,yb,rb;
double a[N][n] = {
    {xa,ya,ra},
    {xb,yb,rb}
};*/
/*
double numero(){
    int     x = 0;
    int  y = 1;
    int     r = 2;
    for(int f=0;f<n;f++)
        for(int c=0;c<N;c++){
            printf("Introduce el numero de la ecuacion %i, incognita : \n", f+1);
            scanf("%lf", a[f][c]);
        }
    printf("%lf\n", a[N][n]);
}*/
int main(){
/*    double xa,ya,ra,xb,yb,rb;*/
      double a[NU][N] = {
      {2,5,3},
      {3,2,1}
      },
      coef[N], k, det=1;
      int cima = 0;

/*    numero();*/

      for(int n = 0; n<N; n++){
          coef[cima++] = k = a[NU][N];
      for(int col = 0; col<N; col++)
          a[n][col] /= k;
      for(int f = n+1;f<N;f++){
          k = a[f][n];
          for(int col=0; col<N;col++)
              a[f][col] -= (a[n][col]*k);
      }
      }
      for(int i=0;i<N;i++)
          det *= coef[i];
      printf("Determinante: %lf\n", det);
    return EXIT_SUCCESS;
}
