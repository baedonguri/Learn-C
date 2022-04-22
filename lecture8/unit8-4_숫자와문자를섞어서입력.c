#include <stdio.h>

void display(char cr, int lines, int width);

int main(void){


    char c;
    int rows, cols;

    // while (1){
    //     scanf("%c %d %d", &c, &rows, &cols);
    //     while (getchar() != '\n')   continue;
    
    //     display(c, rows, cols);
    //     if (c=='\n')
    //         break;      // doesn't work well
    // }


    // 재작성

    printf("Input one character and two integers :\n");

    while((c=getchar()) != '\n'){
        scanf("%d %d", &rows, &cols);
        while (getchar() != '\n')   continue;

        display(c, rows, cols);
        printf("Input another character and two integers :\n");
        printf("Press Enter to quit.\n");
    }

    return 0;
}


void display(char cr, int lines, int width){
    int i,j;

    for (i=0; i<lines; ++i){
        for (j=0; j<width; ++j)
            putchar(cr);
        putchar('\n');
    }
}