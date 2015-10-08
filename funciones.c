#include "lb_2D.h"

///////////////////////////////////////////////////////////////////////////
void guardar_o(double *matriz,int num){    // la funcion guardar graba los datos de matriz en un archivo llamado salia-1.dat
  
  FILE *archivo;   // creo el archivo
  char nombre[12];
  char ext[12]=".dat";
  
  
  
  sprintf(nombre,"%d",num);
  int largo = strlen(nombre) ;
  strcat(nombre,ext);
  //printf("\n  el tam del string es =%i \n",largo);
 
  archivo= fopen(nombre,"w+"); //abro el archivo y le asigno el nombre
  int f=0; 
  int c=0;
  
  for(f=0 ; f<TAM_F ; f++){ //barro todas las filas de la matriz
    for(c=0 ; c<TAM_C ; c++){ //barro todas las columnas de la matriz
      fprintf(archivo,"%.15f	",matriz[TAM_C*f + c]); //guardo un dato y le doy enter
    }
      fprintf(archivo,"\n"); //cuando termino una fila le doy un enter
  }
  
  
  fclose(archivo); //cierro el archivo
}

///////////////////////////////////////////////////////////////////////////
void alocar_variables(){
  
  n_0=malloc(sizeof(double)*TAM_C*TAM_F);
  n_1=malloc(sizeof(double)*TAM_C*TAM_F);
  n_2=malloc(sizeof(double)*TAM_C*TAM_F);
  n_3=malloc(sizeof(double)*TAM_C*TAM_F);
  n_4=malloc(sizeof(double)*TAM_C*TAM_F);
  n_5=malloc(sizeof(double)*TAM_C*TAM_F);
  n_6=malloc(sizeof(double)*TAM_C*TAM_F);
  n_7=malloc(sizeof(double)*TAM_C*TAM_F);
  n_8=malloc(sizeof(double)*TAM_C*TAM_F);
  
  n_0_eq=malloc(sizeof(double)*TAM_C*TAM_F);
  n_1_eq=malloc(sizeof(double)*TAM_C*TAM_F);
  n_2_eq=malloc(sizeof(double)*TAM_C*TAM_F);
  n_3_eq=malloc(sizeof(double)*TAM_C*TAM_F);
  n_4_eq=malloc(sizeof(double)*TAM_C*TAM_F);
  n_5_eq=malloc(sizeof(double)*TAM_C*TAM_F);
  n_6_eq=malloc(sizeof(double)*TAM_C*TAM_F);
  n_7_eq=malloc(sizeof(double)*TAM_C*TAM_F);
  n_8_eq=malloc(sizeof(double)*TAM_C*TAM_F);
  
  n_0_n=malloc(sizeof(double)*TAM_C*TAM_F);
  n_1_n=malloc(sizeof(double)*TAM_C*TAM_F);
  n_2_n=malloc(sizeof(double)*TAM_C*TAM_F);
  n_3_n=malloc(sizeof(double)*TAM_C*TAM_F);
  n_4_n=malloc(sizeof(double)*TAM_C*TAM_F);
  n_5_n=malloc(sizeof(double)*TAM_C*TAM_F);
  n_6_n=malloc(sizeof(double)*TAM_C*TAM_F);
  n_7_n=malloc(sizeof(double)*TAM_C*TAM_F);
  n_8_n=malloc(sizeof(double)*TAM_C*TAM_F);
  
  rho=malloc(sizeof(double)*TAM_C*TAM_F);
  u_c=malloc(sizeof(double)*TAM_C*TAM_F);
  u_f=malloc(sizeof(double)*TAM_C*TAM_F);
  u_cuad=malloc(sizeof(double)*TAM_C*TAM_F);
  
  k=malloc(sizeof(double)*TAM_C*TAM_F);
}
///////////////////////////////////////////////////////////////////////////

