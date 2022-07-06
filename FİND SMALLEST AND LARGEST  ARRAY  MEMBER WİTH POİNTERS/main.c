/*
---------------------------------------
CREATED BY ENES DEDEOĞLU
e.dedeoglu@mekatronik.org.tr
--------------------------------------
*/

#include <stdio.h>

int enKucukElemaniBul(int dizi[],int elemanSayisi);
int enBuyukElemaniBul(int dizi[],int elemanSayisi);

void KullanicidanDizininElemanlarınıOku(int [],int );

int main( )
{
    int gsayi =10;
    int  dizi[gsayi];
    KullanicidanDizininElemanlarınıOku(dizi,gsayi);

    printf("GIRILEN DIZININ ELEMANLARI : \n");

    for (int k =0;k < 10;k++){
        printf("%d\t",dizi[k]);
    }
    printf("\n");

    for (int i = 0;i < 9;i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (dizi[j] > dizi[j + 1]) {
                int gecici = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = gecici;
            }
        }
    }
    enKucukElemaniBul(dizi,gsayi);
    enBuyukElemaniBul(dizi,gsayi);

    return 0;
}

int enKucukElemaniBul(int dizi[],int elemanSayisi) {
    printf("DIZININ EN KUCUK ELEMANI : %d \n",dizi[0]);
    return 0;
}

int enBuyukElemaniBul(int dizi[],int elemanSayisi){
    printf("DIZININ EN BUYUK ELEMANI : %d",dizi[9]);
    return 0;
}

void KullanicidanDizininElemanlarınıOku(int dizi[],int gsayi ){
    int i;
    for ( i = 0;i < gsayi;i++){
        printf("%2d. SAYIYI GIRINIZ : ",i+1);
        scanf("%d", &dizi[i]);
    }
}