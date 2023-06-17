#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main(){
    char str[MAX_LENGTH];

    printf("Input your string (no whitespace): ");
    scanf("%s", str);

    printf("[input : %s]\n", str);
    printf("[length : %lu]\n", sizeof(str));
    printf("[length : %zu]\n", strlen(str));

    return 0;
}

/*
strlen() calculates the length based on the characters until the null character. Therefore, if the input string contains spaces or other whitespace characters, strlen will not include them in the length calculation.
*/