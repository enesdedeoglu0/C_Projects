/*
---------------------------------------
CREATED BY ENES DEDEOĞLU
e.dedeoglu@mekatronik.org.tr
--------------------------------------
*/

#include <stdio.h>

int main() {
     char * pk ,k ='a';
     int *pt, t = 22;
     double *pg, g =5.5;

    printf("K : %c\t T : %d\t  G : %.2f\n",k,t,g);
      pk =&k;        pt=&t;    pg = &g;
     *pk = 'b';     *pt=50;     *pg=10.10;

    printf("K : %p\t T : %p\t  G : %p\n",&k,&t,&g);
     pk++;
     pt--;
     pg = pg+5;

    printf("SONRASI : ................................\n");

    printf("K : %c\t T : %d\t  G : %.2f\n",k,t,g);

    printf("K : %p\t T : %p\t  G : %p\n",pk,pt,pg);
    return 0;
}
