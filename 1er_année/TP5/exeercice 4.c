#include<stdio.h>

int somme = 0;
int i;
int nbr;
int somme1;

nbrParf(int);

int nbrParf(int nbr){
for(i=1 ; i < nbr; i++){
if(nbr%i == 0){
somme += i;
}
}
return(somme);
}

int main()
{
    printf("Entre un nombre \n");
    scanf("%d", &nbr);
    somme1 = nbrParf(nbr);
    if(somme1 == nbr){
    printf("Nombre parfait");
    }
    else{
    printf("Ce n'est pas un nombre parfait");
    }
}
