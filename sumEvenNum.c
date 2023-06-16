#include <stdio.h>

int main(void){
    int sum = 0;
    int n = 0;
    do{
        if(n%2 == 0) sum += n;
        n += 1;
    }while(n<=100);

    printf("%d", sum);

    return 0;
}