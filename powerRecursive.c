/*
 * Calculate the power of n raised to k using recursive calls
 */

#include <stdio.h>

int pow(int n, int k){
    if(k==0)
        return 1;
    else
        return n * pow(n, k-1);
}

int main(void){
    int n, k;

    printf("Input n and k for n^k : ");
    scanf("%d %d", &n, &k);

    printf("%d ^ %d = %d\n", n, k, pow(n,k));

    return 0;
}