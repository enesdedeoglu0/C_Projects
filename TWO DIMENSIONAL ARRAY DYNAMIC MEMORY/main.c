// CREATED BY ENES DEDEOĞLU ~~~ 21.05.2022


#include <stdio.h>
#include <stdlib.h>

void matrisyazdir(int**,int,int );
void transpozYazdir(int**,int,int);

int main() {
    int **matris;
    int satirSayisi;
    int sutunSayisi;

    printf("OLUSTURACAGINIZ MATRISIN SATIR SAYISINI GIRINIZ : ");
    scanf("%d",&satirSayisi);
    printf("OLUSTURACAGINIZ MATRISIN SUTUN SAYISINI GIRINIZ : ");
    scanf("%d",&sutunSayisi);

    matris = (int**) malloc(sizeof (int * )*satirSayisi);
    int i,j;
    for ( i = 0;i < satirSayisi;i++)
        matris[i] = (int *) malloc(sizeof (int)*sutunSayisi);

    printf("--------------------------------\n");
    printf("MATRIS ICIN ELEMANLARI GIRINIZ : \n");
    printf("--------------------------------\n");

    for ( i= 0;i < satirSayisi;i++) {
        for (j = 0;j < sutunSayisi;j++) {
            printf("MATRIS [%d][%d] = ",i,j);
            scanf("%d",&(matris[i][j]));
        }
    }
    printf("\n");

    printf("--------------------------------\n");
    printf("GIRDIGINIZ MATRIS : \n");
    printf("--------------------------------\n");
    matrisyazdir(matris,satirSayisi,sutunSayisi);

    printf("--------------------------------\n");
    printf("MATRIS TRANSPOZU : \n");
    printf("--------------------------------\n");
    transpozYazdir(matris,satirSayisi,sutunSayisi);

    for (i =0; i< satirSayisi;i++)
        free(matris[i]);
    free(matris);


    return 0;

}

void matrisyazdir(int **matris,int satir,int sutun){
    int i,j;
    for ( i = 0; i < satir;i++){
        for ( j =0;j < sutun;j++){
            printf("%5d",matris[i][j]);
        }
        printf("\n");
    }
}
void transpozYazdir(int**matris,int satir,int sutun){
    int i,j;
    for ( i = 0; i < sutun;i++){
        for ( j =0;j < satir;j++){
            printf("%5d",matris[j][i]);
        }
        printf("\n");
    }
}