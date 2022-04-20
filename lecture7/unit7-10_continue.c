#include <stdio.h>

int main(void){

    /* continue */
    // for (int i = 0; i < 10; i++){
    //     if (i==5)
    //         continue;
    //     printf("%d ", i); // 0 1 2 3 4 6 7 8 9 

    // }


    /* break */
    // for (int i = 0; i < 10; i++){
    //     if (i==5)
    //         break;
    //     printf("%d ", i); // 0 1 2 3 4
    // }

    /* while and continue */
    // int count = 0;
    // while (count < 5){
    //     int c = getchar();
    //     if (c=='a')
    //         continue;
    //     putchar(c);
    //     count++;
    // }


    /* continue as a placeholder */
    // while (getchar() != '\n')
    //     continue;

    /* Need to use continue ? */
    // char c;
    // while ((c=getchar()) != '\n'){
    //     if (c=='a')
    //         continue;
    //     putchar(c);

        // if (c != 'a')
        //     putchar(c);
    // }



    /* break */

    // char c;
    // while (1){
    //     char c = getchar();

    //     if (c == '.')
    //         break;
    //     putchar(c);
    // }


    for (int i=0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (j==5)
                break;
            
            printf("(%d %d)", i,j);
        }
        printf("\n");
    }

    return 0;
}