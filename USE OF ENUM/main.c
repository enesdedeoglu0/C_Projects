
/*
---------------------------------------
CREATED BY ENES DEDEOĞLU
e.dedeoglu@mekatronik.org.tr
--------------------------------------
*/
#include <stdio.h>

int main() {
    enum boolean {
        false = 0,
        true = 1
    };

    enum boolean dogru_mu;
    dogru_mu = true;
    if (dogru_mu == true)
        printf("DOGRU\n");
    return 0;
}
