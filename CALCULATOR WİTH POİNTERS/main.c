
/*
---------------------------------------
CREATED BY ENES DEDEOĞLU ~~~ 15.05.2022
e.dedeoglu@mekatronik.org.tr
--------------------------------------
*/

#include <stdio.h>
#include <math.h>

int topla (int,int );
int cikar (int,int );
int carp(int,int );
int modAl(int,int );
int üsAL(int,int );

int hipotenüs(int ,int  );

int Hesapla (int *islemPtr(int,int),int,int  );
int main() {

    int sayi1;
    int sayi2;
    printf("LUTFEN IKI ADET SAYI GIRINIZ : ");

    scanf("%d",&sayi1);
    scanf("%d",&sayi2);

    printf("TOPLAM :%d\n", Hesapla(topla,sayi1,sayi2));
    printf("FARK :%d\n", Hesapla(cikar,sayi1,sayi2));
    printf("CARPIM :%d\n", Hesapla(carp,sayi1,sayi2));
    printf("MOD  :%d\n", Hesapla(modAl,sayi1,sayi2));
    printf("US   :%d\n", Hesapla(üsAL,sayi1,sayi2));
    printf("HIPOTENUS   :%d\n", Hesapla(hipotenüs,sayi1,sayi2));

    return 0;
}

int topla (int sayi1,int sayi2 ){
    return sayi2+sayi1;
}

int cikar (int sayi1,int sayi2 ){
    return sayi1-sayi2;
}

int carp (int sayi1,int sayi2 ){
    return sayi2*sayi1;
}

int modAl (int sayi1,int sayi2 ){
    return sayi1 % sayi2;
}

int üsAL(int sayi1,int sayi2 ){
    return pow(sayi1,sayi2);

}

int hipotenüs(int sayi1, int sayi2 ){
    return hypot(sayi2,sayi1);
}
int Hesapla (int *islemPtr(int , int ),int sayi1,int sayi2 ){
    int sonuc;
    sonuc = islemPtr(sayi2,sayi1);
    return sonuc;
}