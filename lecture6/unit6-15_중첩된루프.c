#include <stdio.h>



/* #1 */
// #define NUM_ROWS 5
// #define FIRST_CHAR 'A'
// #define LAST_CHAR 'K'

// int main(void){
//     int r;
//     int c;

//     for (r = 0; r < NUM_ROWS; r++){     // outer loop
//         for (c = FIRST_CHAR; c <= LAST_CHAR; c++){  // inner loop
//             printf("%c ", c);
//         }
//         printf("\n");
//     }


//     return 0;
// }


/* #2 */
// #define NUM_ROWS 10
// #define FIRST_CHAR 'A'

// int main(void){
//     int r;
//     int c;

//     for (r = 0; r < NUM_ROWS; r++){
//         for (c = FIRST_CHAR; c <= FIRST_CHAR + r; c++){
//             printf("%c ",c);
//         }
//         printf("\n");
//     }

// }

/* #3 */

int main(void){
    
    int r, c;
    const char FISRT_CHAR = 'A';
    char LAST_CHAR;

    printf("마지막 알파벳을 입력하세요. :");
    scanf("%c", &LAST_CHAR);
    int NUM_ROWS = LAST_CHAR - FISRT_CHAR + 1;

    for (r=0; r < NUM_ROWS; r++){
        for (c = FISRT_CHAR+r; c <= LAST_CHAR; c++){
            printf("%c ", c);
        }
        printf("\n");
    }

}