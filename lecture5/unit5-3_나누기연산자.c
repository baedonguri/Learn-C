#include <stdio.h>

int main(void){

    int hours, minutes, seconds = 0;

    printf("Input seconds : ");
    scanf("%d", &seconds);

    while (seconds >= 0){
        hours = seconds / 3600;
        minutes = (seconds % 3600) / 60;
        seconds = (seconds % 3600) % 60;

        printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

        printf("Input seconds : ");
        scanf("%d", &seconds);
    }
    printf("Good Bye\n");

    return 0;
}