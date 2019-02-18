#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SIZE 30

int Push(int number, int *list, int size){
    int i;
    for(i = 0; i < size; i++){
        if(list[i] != '\0'){

        }
    }
    return 0;
}

int main(void){
    int number, op, filled = 0, i;
    int list[STR_SIZE] = {0};

    while(1){
        printf("Press:\n 1- Pop\n 2- Push\n 3- Exit\n\n");
        scanf("%d", &op);

        if(op == 1 && filled > 0){
            filled = filled - 1;
        }else if(op == 1 && filled == 0){
            printf("Dont try to bug me! Please push a number!\n\n");
        }else if(op == 2 && filled != (STR_SIZE - 1)){
            printf("Enter a number: ");
            scanf("%d", &number);
            list[filled] = number;
            filled = filled + 1;
        }else if(op == 2 && filled == (STR_SIZE-1)){
            printf("Sorry, your stack is full. Please use Pop!\n");
        }else if(op == 3){
            printf("Here is your final stack: ");
            for(i = 0; i < filled; i++){
                printf("%d, ", list[i]);
            }
            printf("\n\n");
            break;
        }

        printf("Your current stack: ");
        for(i = 0; i < filled; i++){
            printf("%d, ", list[i]);
        }
        printf("\n\n");
        system("pause");
        system("cls");
    }

    printf("Thanks for playing.\n");

    return 0;
}
