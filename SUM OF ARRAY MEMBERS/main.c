
/*
---------------------------------------
CREATED BY ENES DEDEOĞLU
e.dedeoglu@mekatronik.org.tr
--------------------------------------
*/
#include <stdio.h>


int topla (int dizi[],int elemanSayisi);
void KullanicidanDizininElemanlarınıOku(int dizi[],int elemanSayisi );

int main() {
    int elemanSayisi;
    printf("KAC ELEMANLI DIZI GIRMEK ISTERSINIZ  :  ");
    scanf("%d", &elemanSayisi);

    int dizi[elemanSayisi];

    KullanicidanDizininElemanlarınıOku(dizi,elemanSayisi );

    topla(dizi,elemanSayisi);

    return 0;
}

int topla (int dizi[],int elemanSayisi) {
    int toplam = 0;
    for ( int i = 0;i < elemanSayisi ;i++ ) {

        toplam = toplam + dizi[i];
    }
    printf("DIZININ ELEMANLARININ TOPLAMI : %d",toplam);

}
void KullanicidanDizininElemanlarınıOku(int dizi[],int elemanSayisi ) {
    int i;
    for (i = 0; i < elemanSayisi; i++) {
        printf("%2d. SAYIYI GIRINIZ : ", i + 1);
        scanf("%d", &dizi[i]);
    }
}