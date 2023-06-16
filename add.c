/* 
 * 01. Types, Operators and Expressions
 * Read two numbers and retun the sum of them
 */

#include <stdio.h>

int main(void){
    int sum;
    int num1, num2;

    printf("first number: ");
    scanf("%d", &num1);
    printf("second number: ");
    scanf("%d", &num2);

    printf("Sum : %d + %d = %d\n", num1, num2, sum);
    return 0;
}