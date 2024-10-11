#include <stdio.h>

int main() {

    int n;
    int i = 0;
    int potenza = 2;

    printf("inserire il numero delle potenze di 2 che si vogliono calcolare (da 2 a 20):\n");
    scanf("%d", &n);

    if(n >= 2 && n <= 20) {
        while(i < n) {
            potenza *= 2;
            printf("2^%d = %d\n", i, potenza);
            i++;
        }
    }
    else {
        printf("numero non valido\n");
    }

    return 0;
}
