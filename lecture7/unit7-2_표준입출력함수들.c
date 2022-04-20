#include <stdio.h>

int main(void){


    /*
        1. Introduce getchar(), putchar()
        2. Use while loop to prcess character sequences
        3. Filter a specific character
        4. Convert numbers to asterisks
        5. Lower characters to Upper characters
    */
   char ch;

/* #1 */
//    while ((ch = getchar()) != '\n'){

//        putchar(ch);

//    }

/* #2 */

//    while ((ch = getchar()) != '\n'){

//        if (ch == 'F' || ch == 'f')
//             ch = 'X';
//        putchar(ch);

//    }

/* #3 */

    // while ((ch = getchar()) != '\n'){
    //     // for (int i = '0'; i <= '9'; i++)
    //         // if(ch == i)
    //         //     ch = '*';

    //     if (ch >= '0' && ch <= '9')
    //         ch = '*';
    //     putchar(ch);
    // }
    // putchar(ch);


    /* #5 */
    while ((ch = getchar()) != '\n'){
        if (ch >= 'a' && ch <= 'z')
            ch -= 'a'-'A';
        else if (ch >= 'A' && ch <= 'Z')
            ch += 'a' - 'A';

        putchar(ch);


    }
    putchar(ch);


    return 0;




}