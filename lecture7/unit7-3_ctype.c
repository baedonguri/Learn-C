#include <stdio.h>
#include <ctype.h>

int main(void){

    char ch;

    // while ((ch=getchar()) != '\n'){
    //     if (ch >= 'a' && ch <= 'z')
    //         ch -= 'a'-'A';
    //     else if (ch >= 'A' && ch <= 'Z')
    //         ch += 'a'-'A';

    //     putchar(ch);
    // }

    while ((ch=getchar()) != '\n'){
        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);


        if (isdigit(ch))
            ch = '*';
            
        putchar(ch);
    }


    putchar(ch);



    return 0;
}