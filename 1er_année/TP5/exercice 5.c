#include <stdio.h>
#include <string.h>


int tab[6]={ 2, 28, 7, 5 , 6 , 3};
int N = 6;
int nbr;
int i;
int j;
int somme = 0;
int somme1;
int compteur;

nbrParf(int);

int nbrParf(int nbr){
for(i=1 ; i < nbr; i++){
if(nbr%i == 0){
somme += i;
}
}
return(somme);
}

int main(){
    printf("Entre un nombre \n");
    scanf("%d", &nbr);
    for(j=1; j < N; j++){
    somme1=nbrParf(nbr);
      if(somme1 == nbr){
    printf("Nombre parfait detecter \n");
    printf(" en case%d", j);
    }
    }
}
