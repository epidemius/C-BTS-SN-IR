#include <stdio.h>
#include <string.h>

int tab[6]={ 2, 4, 7, 5 , 6 , 3};
int N = 6;
int VAL;
int i;
int res;

recherVal(int*,int,int);

int recherVal( int*tab, int N, int VAL){
for(i=1; i<= N; i++){
 if(tab[i]==VAL){
     return(i);
 }

 }
}

main(){
printf(" quelle valeur rechercher vous ? \n");
scanf("%d", &VAL);
recherVal(tab,N,VAL);
printf("%d", i76);

}
