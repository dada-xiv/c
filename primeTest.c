/* 
 *  Simple primality test
 */

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n){
    bool bPrime = true;

    for(int i=2;i<n;i++){
        if(n % i ==0){
            bPrime = false;
            break;
        }
    }

    return bPrime;
}

int main(){
    int n = 2;
    int count = 0;
    int total;

    printf("Input number of primes you want to get: ");
    scanf("%d", &total);

    while(count < total){
        if(isPrime(n)){
            printf("%d ", n);
            count += 1;
        }
        n++;
    }

    printf("\n");
    return 0;
}