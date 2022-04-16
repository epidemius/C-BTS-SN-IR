#include<stdio.h>
#include<stdlib.h>
#include"fonction.h"

int n = 6;
int tab[] = {1,2,3,4,5,6} ;
int i;
int tab3[6];
int verifTab(int n, int tab[]);

main(int argc, char *argv[]){
printf("euuuh \n");
for(i = 0 ; i < n ;i++){
printf("%d \n", tab[i]);
}
verifTab(n,*tab);
}
