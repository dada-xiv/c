/* 
 *  Simple recursive call
 */

#include <stdio.h>

void recursive(int num){
    if(num <= 0) // condition for break
        return;
    
    printf("Recursive call : %d\n", num);
    recursive(num-1);
}

int main(void){
    recursive(5);
    return 0;
}
