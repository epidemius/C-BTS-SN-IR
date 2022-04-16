void remplirMat(int n ,int m, int tab[n][m]){

    int i, j;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++) {
            printf("\n \t Entrer element [%d] [%d] : " , i,j);
            scanf("%d",&tab[i][j]);
        }
    }
}

void afficherMat(int n, int m, int tab[n][m] ){

    int i, j;

    printf("\t MATRICE: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++) {
                printf("\t\t %d \t", tab[i][j]);
        }
        printf("\n");
    }
}
