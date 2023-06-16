/*
 * Print a multiplicaion table of 9 × 9 
 */

#include <stdio.h>

int main(void){
    int dan = 2;
    int i = 1;

    while(dan<=9){
        i = 1;
        while(i<=9){
            printf("%d * %d = %d\n", dan, i, dan*i);
            i += 1;
        }
        printf("\n");
        dan += 1;
    }

    return 0;
}