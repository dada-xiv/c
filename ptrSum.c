/*
 * Declaring an array and access the array through a pointer variable.
 *
 */

#include <stdio.h>

int main(void){
    int arr[] = {1, 2, 3, 4, 5};
    int * ptr;

    ptr = &arr[4];

    int sum = 0;
    for(int i=0;i<5;i++){
        sum += *(ptr-i);
    }

    printf("%d", sum);

    return 0;
}