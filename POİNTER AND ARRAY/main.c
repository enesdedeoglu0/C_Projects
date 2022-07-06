/*
---------------------------------------
CREATED BY ENES DEDEOĞLU ~~~ 15.05.2022
e.dedeoglu@mekatronik.org.tr
--------------------------------------
*/
#include <stdio.h>

int main() {
    int i;

    int dizi[5]= {11,22,33,44,55};
    int *pd;
    pd = dizi;
    *pd = 5;

    *(pd + 4)= 20;

    printf("%p\n",pd);
    for ( i = 0;i <5; i++) {
        printf("DIZI [%d] : %d  :  %p\n", i, dizi[i], &dizi[i]);
    }

    printf("%p \n", dizi);

    return 0;
}
