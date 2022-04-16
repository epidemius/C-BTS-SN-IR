#include <stdio.h>
#include <stdlib.h>
#include "fonctions_matrice_vo.h"

#define LIGNE 2
#define COLONNE 3



int somme;
int MAX;
int somme1[LIGNE];
int somme2=1;
int i, j;
int mat[LIGNE][COLONNE];
int mat2[LIGNE][COLONNE];


void main(){
    remplirMat(LIGNE, COLONNE, mat);
 for (i=0; i<LIGNE ; i++){
    for(j=0; j<COLONNE; j++){
    somme+= mat[i][j];
    }
 }
 int MIN = mat[0][0];
    for (i=0; i<LIGNE ; i++){
    for(j=0; j<COLONNE; j++){
somme1[i]+=mat[i][j];

 }
 }
    for (i=0; i<LIGNE ; i++){
    for(j=0; j<COLONNE; j++){
        if(mat[i][j]>MAX){
            MAX=mat[i][j];
        }
        if(mat[i][j]<MIN){
            MIN=mat[i][j];
        }
        if(i==j){
            somme2*=mat[i][j];
        }
        mat2[i][j]=mat[i][j];
 }
 }
printf("\n La somme total de la matrice est egale a %d \n \n", somme);
afficherMat(2,3,mat);
afficherTab(2, somme1);
printf("\n \n Le resultat du produit des elements diagonaux de la matrice est egale a %d", somme2);
printf("\n La valeur MAX : %d", MAX);
printf("\n La valeur MIN: %d", MIN);
//printf("\n la transposition du tableau donne :\n");
//afficherMat(2,3,mat2);
return;
}
