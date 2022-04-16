#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    short int x;
    int s;
    int i;
	printf(" saisissez un nombre \n");
	scanf("%d", &x);
    s= x%2;
	if( s != 0){
    printf(" le nombre est impair");
        for(i=1, i<= 9, i++)
        {
        printf( "%d \n" , x+2*i-1)
   }
	}
	else{
    printf("le nombre est pair ");
         for(i=1, i<= 9, i++){
        printf( "%d \n" , x+2*i)

	}
}


