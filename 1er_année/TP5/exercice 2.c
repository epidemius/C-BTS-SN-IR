#include <stdio.h>
#include <string.h>

int facto(int);
float res;
float s;
int i;

int facto(int a){
int i;
int b=1;
for ( i=2; i <= a; i++){
b *=i;
}
return(b);
}

// EXERCICE 2

main(){
   printf("1/n!");
printf("Saisissez n");
scanf("%d", &n);
for(i=1; i<=n ;i++)
    {
    res = facto(i);
    s += 1/res;
    printf("%d", i);
    i++;
}
printf("%f", s);
}
