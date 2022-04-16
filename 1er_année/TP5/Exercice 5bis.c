#include <stdio.h>
#include <string.h>

char * phrase = "ceci est une phrase a analyse par mon programme, oui je sais elle est un peu longue et elle n'ai d'aucun interet litteraire mais elle reste tous de meme utile, elle fait 200 caractere a peu pret mais c'est pas trop sur il faut lancer le programme pour verifier " ;
char * phraseInv;
int len;
int i;
int j;
int compteur;
int compteur1;
char lettre;

int main(){
    printf("Veuillez saisir la lettre que vous recherchez \n");
    scanf("%c", &lettre);
len = strlen(phrase);
printf("la pharse contient %d caractere \n", len);
for(i=1; i<len;i++){
    if(phrase[i] == ' '){
       compteur++;
    }
}
printf(" la phrase contient %d mot\n", compteur);
for(i=1; i<len;i++){
    if(phrase[i]== lettre)
    compteur1++;
}
printf(" la phrase contient %d fois la lettre %c \n", compteur1, lettre);
printf(" la phrase a l'envers ressemble a ca : \n");
for(i=len; i>1;i--){
    printf("%c", phrase[i]);
}
for (i=0,j=len-1 ; i<j ; i++,j--){
    phraseInv=phrase[i];
    phrase[i] = phrase[j];
    phrase[j]=phraseInv;
}
printf(" \n Enfin, en inversant les caractere dans une nouvelle variable char, le resultat est le suivant \n");

printf("%c", phraseInv);
}

