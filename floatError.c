#include <stdio.h>

int main(void){
    int i;
    float num=0.0;

    for(i=0;i<100;i++){
        num += 0.1;
    }

    printf("The sum of the number 0.1, repeated 100 times: %f \n", num);

    return 0;
}