#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    printf("sizeof(arr) = %d\n", sizeof(arr));
    printf("length of arr[] = %d\n", sizeof(arr)/sizeof(int));
    
    return 0;
}