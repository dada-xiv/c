/*
 * Get five integers and calculate the sum of them
 */

#include <stdio.h>

int main(void){
    int num;
    int count = 0;
    int sum = 0;

    while(count<5){
        while(num<=0){
            printf("Input a num bigger than 0 (count:%d): ", count+1);
            scanf("%d", &num);
        }
        sum += num;
        num = 0;
        count += 1;        
    }

    printf("Total : %d.\n", sum);
    return 0;
}
