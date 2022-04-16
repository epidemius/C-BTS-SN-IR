#include<stdio.h>
#include<stdlib.h>

main(int argc, char *argv[])
{
    int tableau[4], i = 0, n = 0;

    for (i = 0 ; i < 4;i++)
    {
       printf("inserer une valeur");
       scanf("%d", &n);
       tableau[i] = n;
    }
    for (i = 0 ; i < 4; i++)
    {
   printf("%d \n", tableau[i]);
    }
    return;
}
