#include <stdio.h>
#include <string.h>

short int ligne;
int main(){
printf("entrer un nombre de ligne : ");
scanf("%d", &ligne);
if(ligne == 3){
    printf("* \n** \n***");
}
if(ligne == 4){
    printf("   * \n  *** \n ***** \n*******");
}
if(ligne == 5){
    printf("***** \n***** \n***** \n***** \n*****");
}
}
