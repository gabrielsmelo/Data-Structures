#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int i, found = 0, wait = 0;
    char str[30];

    fgets(str, 30, stdin);

    for(i = 0; i < strlen(str); i++){
        if(str[i] == '('){
                wait = wait + 1;
                continue;
        }else if(str[i] == ')' && wait >= 1){
                wait = wait - 1;
                continue;
        }else if(str[i] == ')' && wait == 0){
                found = 1;
                break;
        }

        if(wait >= 1){
            found = 1;
        }
    }

    if(found){
        printf("False\n");
    }else{
        printf("True\n");
    }

    return 0;
}
