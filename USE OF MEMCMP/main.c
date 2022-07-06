/*
---------------------------------------
CREATED BY ENES DEDEOĞLU
e.dedeoglu@mekatronik.org.tr
--------------------------------------
*/

#include <stdio.h>
#include <string.h>

int main() {

    char s1 [] = "aaaaaaaaaa";
    char s2 [] = "aaaaabbbbb";

    int sonuc = memcmp(s1,s2,10);
    if (sonuc < 0)
        printf("S1 < S2 \n");
    else if (sonuc > 0)
        printf("S1 > S2 \n");
    else
        printf("S1 == S2 \n");

    return 0;
}
