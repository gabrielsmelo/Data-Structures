#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SIZE 50

int main(void){

    int i, head, tail, count = 1;
    char str[STR_SIZE];

    fgets(str, STR_SIZE, stdin);

    for(i = strlen(str); i >= 0; i--){
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
