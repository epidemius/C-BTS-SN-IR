#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
 int limit;
 int i,j,k;
 int taille = 4;
void main (int argc, char *argv[])
{
    Installation insta[10];

    printf(" Combien d'installation avez vous ? :\n");
    scanf("%d", &limit);
    printf("Vous avez %d machine \n \n", limit);

    for(i=0 ; i < limit; i++){

    printf(" Renseignement des information de la machine %d \n", i);

    // ID
    printf("Quelle est l'id de la machine %d ? :\n", i+1);
    scanf("%d", &insta[i].id);
    printf("L'id de la machine est : %d \n \n", insta[i].id);

    //Nom
    printf("Quelle est le nom de la machine %d ? :\n", i+1);
    scanf("%s", &insta[i].nom);
    printf("Le nom de la machine est : %s \n \n", insta[i].nom);

    //Localisation
    insta[i].loca = (char *) malloc( 10 * sizeof(char));
    printf("Quelle est la localisation de la machine %d ? :\n", i+1);
    scanf("%s", insta[i].loca);
    printf("La localisation de la machine est au :  %s \n \n", insta[i].loca);

    //Fonction
    insta[i].fonct = (char *) malloc( 10 * sizeof(char));
    printf("Quelle est la fonction de la machine %d ? :\n", i+1);
    scanf("%s", insta[i].loca);
    printf("La fonction de la machine est :  %s \n \n", insta[i].loca);

    //Pression
    printf("Session pression de la machine %d \n", i+1);
    for(j=0; j<7; j++){
    printf("Quelle est la pression de la machine %d pour le prelevement n°%d ? :\n", i+1 , j+1);
    scanf("%f", &insta[i].pression[j]);
    printf("La pression du prelevement est de : %f \n \n", insta[i].pression[j]);
    }
   // moyenne(7,insta[i].pression);
   // printf("La moyenne est de %d", moy);
    //Température
    printf("Session temperature de la machine %d \n", i+1);
    for(k=0; k<7; k++){
    printf("Quelle est la temperature de la machine %d pour le prelevement %d ?:\n", i+1 , k+1);
    scanf("%f", &insta[i].temperature[k]);
    printf("La temperature de la machine est de : %f \n \n", insta[i].temperature[k]);
    }

    moyenne(7,insta[i].pression)


}




}
// loca = (cahr *) malloc(taille * sizeof(char);
