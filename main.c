#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    srand(time(NULL));
    int numeri[99];
    int n, count = 0, errore = 0;
    for (int i = 0; i < 100; i++) {
        numeri[i] = rand() % 10;
    }
    for (int i = 0; i < 100; i++) {
        printf("%d ", numeri[i]);
    }
    do {
    printf("\ninserisci un numero da 0 a 9 : \n");
    scanf("%d", &n);
        if (n < 0 || n > 9) {
            printf("errore, il numero non rientra nei parametri\n");
            errore = 1;
        }
    }
     while (errore == 1);
    for (int i = 0; i < 100; i++) {
        if (numeri[i] == n) {
            count++;
        }
    }
    printf("il numero %d compare %d volte", n, count);
    return 0;
}