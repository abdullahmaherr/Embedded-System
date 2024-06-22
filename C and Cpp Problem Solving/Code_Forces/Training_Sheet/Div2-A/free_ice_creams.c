/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : free_ice_cream.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
#include <stdio.h>

int main(void) {
    int n,i;
    unsigned long long x, distress = 0;
    scanf("%d %llu", &n, &x);

    for (i = 0; i < n; i++) {
        char operation;
        unsigned long d;
        scanf(" %c %lu", &operation, &d);

        if (operation == '+') {
            x += d;
        } else if (operation == '-') {
            if (d <= x) {
                x -= d;
            } else {
                distress++;
            }
        }
    }

    printf("%llu %llu\n", x, distress);

    return 0;
}
