#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#define TAM_C 4
#define TAM_F 4

#define u_0 0.1

#define W 1.0

#define w_0 4.0/9.0
#define w_1 1.0/9.0
#define w_2 1.0/9.0
#define w_3 1.0/9.0
#define w_4 1.0/9.0
#define w_5 1.0/36.0
#define w_6 1.0/36.0
#define w_7 1.0/36.0
#define w_8 1.0/36.0

#define cachito 0.0000000001


///////////////////////////////////////////////////////////////////////////
//////////////////////////  Variables /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////

double *n_0;
double *n_1;
double *n_2;
double *n_3;
double *n_4;
double *n_5;
double *n_6;
double *n_7;
double *n_8;

double *n_0_eq;
double *n_1_eq;
double *n_2_eq;
double *n_3_eq;
double *n_4_eq;
double *n_5_eq;
double *n_6_eq;
double *n_7_eq;
double *n_8_eq;

double *n_0_n;
double *n_1_n;
double *n_2_n;
double *n_3_n;
double *n_4_n;
double *n_5_n;
double *n_6_n;
double *n_7_n;
double *n_8_n;

double *rho;
double *u_c;
double *u_f;
double *u_cuad;

double *k;






///////////////////////////////////////////////////////////////////////////
//////////////////////////  Funciones /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////

void guardar_o(double *matriz,int num);
void alocar_variables();


