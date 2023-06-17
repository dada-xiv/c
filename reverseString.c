/*
 * Print the reverse of the input string 
 */

#include <stdio.h>

#define MAX_LENGTH 100

int main(){
    char str[MAX_LENGTH];
    char strR[MAX_LENGTH]; // reversed string
    int strLength = 0;

    printf("Input your word: ");
    scanf("%s", str);

    for(int i=0;str[i]!='\0';i++){
        strLength += 1;
    }

    printf("length : %d\n", strLength);

    for(int i=0;i<strLength;i++){
        strR[i] = str[strLength-(i+1)];
    }
    strR[strLength] = str[strLength];

    printf("reversed : %s\n", strR);

    return 0;
}