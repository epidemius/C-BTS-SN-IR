// EXERCICE 1
#include <stdio.h>
#include <string.h>

int n;
int k;
int l;

int factok;
int facton;
int factol;
int result1;
int result;

int facto(int);


int facto(int a){
int i;
int b=1;
for ( i=2; i <= a; i++){
b *=i;
}
return(b);
}

main()
{
l=n-k;
printf("n!/k!(n-k)! \t \n");
printf("Saisissez n");
scanf("%d", &n);
printf("Saisissez k");
scanf("%d", &k);
if(n>k){
factok = facto(k);
facton = facto(n);
factol = facto(l);
result1 = factok*factol;
result = facton/result1;
printf(" le resultat est %d \n", result);
printf("%d \n", facton);
printf("%d \n", result1);
}
else{
    printf(" le calcul n'est pas possible");
}
}
