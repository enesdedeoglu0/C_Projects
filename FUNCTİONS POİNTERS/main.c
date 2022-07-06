/*
---------------------------------------
CREATED BY ENES DEDEOĞLU
e.dedeoglu@mekatronik.org.tr
--------------------------------------
*/

#include <stdio.h>

void f1(int );
void f2(int *);

int main() {
    int x = 55;
    printf("x in  DEGERI... \n");
    printf("FONKSIYONLAR CAGIRILMADAN ONCE : %d\n",x);
    f1(x);
    printf("f1 CAGIRILDIKTAN SONRA : %d \n",x);
    f2(&x);
    printf("f2 CAGIRILDIKTAN SONRA  : %d\n",x);

    return 0;
}
void f1(int n) {
    n = 66;
    printf("f1 FONKSIYONU ICINDE : %d\n",n);
}
void f2 (int *n){
    *n = 77;
    printf("f2 FONKSIYONU ICINDE  : %d\n",*n);
}