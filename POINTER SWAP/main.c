
/*
---------------------------------------
CREATED BY ENES DEDEOĞLU ~~~ 15.05.2022
e.dedeoglu@mekatronik.org.tr
--------------------------------------
*/

#include <stdio.h>

void terstenYaz(int *dizi, int n);
int main() {
    int dizi [] = {10 ,20,30,40,50,60,70};
    int diziElemanSayisi = sizeof(dizi)/sizeof(int);
    int *dizi_ptr;
    dizi_ptr = dizi;
    for (int i= 0;i<diziElemanSayisi;i++){
       // printf("%d\t",dizi[i]);
        printf("%d \t",*(dizi_ptr+i));
    }


    terstenYaz(dizi,diziElemanSayisi);
    printf("\n");
    for (int i= 0;i<diziElemanSayisi;i++){
        // printf("%d\t",dizi[i]);
        printf("%d \t",*(dizi_ptr+i));
    }
    return 0;
}
void terstenYaz(int *dizi, int n){
    int gecici;

    for (int i = 0;i < n/2;i++){
        gecici = *(dizi+i);
        *(dizi+i)=*(dizi+(n-1)-i);
        *(dizi+(n-1)-i)= gecici;
    }


}