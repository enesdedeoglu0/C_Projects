
/*
---------------------------------------
CREATED BY ENES DEDEOĞLU ~~~ 17.07.2022
e.dedeoglu@mekatronik.org.tr
--------------------------------------
*/

#include <stdio.h>

int main() {
     int sayi;
     int toplam  = 0;

    printf("LUTFEN SAYI GIRINIZ : \n");
    scanf("%d",&sayi);

    for (int i = 1;i<sayi;i++){
        if (sayi % i == 0){
            toplam += i;
        }
    }
    if (sayi == toplam)
        printf("GIRDIGINIZ SAYI MUKEMMEL SAYIDIR.");

    else
        printf("GIRDIGINIZ SAYI MUKEMMEL SAYI DEGILDIR.");

    return 0;
}
