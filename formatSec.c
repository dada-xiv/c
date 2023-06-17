#include <stdio.h>

int main(void){
    int totalSec;
    int hour, min, sec;

    printf("Input a seconds : ");
    scanf("%d", &totalSec);

    hour = totalSec/3600;
    min = (totalSec - hour*3600)/60;
    sec = totalSec%60;

    printf("[%d, %d, %d]\n", hour, min, sec);   

    return 0;
}