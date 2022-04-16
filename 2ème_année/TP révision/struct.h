#define MAX_INSTA 10

typedef struct  {
    int id;
    char nom[20];
    char *loca;
    char *fonct;
    float pression[6];
    float temperature[6];
}Installation;
Installation insta[MAX_INSTA];

int moyenne(int n,float tab[]){
int i;
int total;
int moy;
for(i=0; i<n; i++){
total =+tab[i];
}
moy = total / n;
printf("la moyenne est de %d \n", moy);
return moy;
}
