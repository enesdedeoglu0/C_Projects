/*
---------------------------------------
CREATED BY ENES DEDEOĞLU
e.dedeoglu@mekatronik.org.tr
--------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
int main() {

    int n;
    printf("OLUSTURMAK ISTEDIGINIZ DIZI BOYUTUNU GIRINIZ : ");
    scanf("%d",&n);
    int *P_sayi;
    P_sayi = (int *) malloc(n*sizeof (int));

    if (P_sayi == NULL){
        printf("BELLEK DOLU..............");
    } else {


        printf("%p\n", P_sayi);
        *P_sayi = 245;

        for (int i; i < n; ++i) {
            printf("%d\n", P_sayi[i]);
        }
    }
    free(P_sayi);
    printf("--------------------\n");
    for( int i;i < n; ++i){
        printf("%d\n",P_sayi[i]);
    }
    return 0;
}
