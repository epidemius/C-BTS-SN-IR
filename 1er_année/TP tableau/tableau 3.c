#include<stdio.h>
#include<stdlib.h>

main(int argc, char *argv[]){
    int tab[]= {12,15,16,10,8,19,13,14};
    int n = 0;
    int m;
    int i = 0;
for (i = 0 ; i < 8 ;i++){
    if (tab[i] > n){
        n = tab[i];
        m = 1+i;
    }
    }
    printf(" le nombre le plus grand est %d \n\n", n);
    printf(" Ce nombre se trouve a la %d eme place du tableau \n\n", m);
}
