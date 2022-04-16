#include <stdio.h>
#include <stdlib.h>

struct Personne
{
 char Prenom[20];
 char Nom[20];
 //float NoteDst;
 //float NoteTp;
 //float Moyenne;
};

int main()
{
    struct Personne Personne1;
 printf("tapez le prenom, nom \n");
 scanf("%s",&Personne1.Prenom);
 scanf("%s",&Personne1.Nom);
 printf("\n%s%s",Personne1.Prenom , Personne1.Nom);
}

