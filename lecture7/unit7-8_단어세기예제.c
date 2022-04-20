#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '.'


int main(void){

    char ch;

    int n_chars = 0;
    int n_lines = 0;
    int n_words = 0;
    bool word_flag = false;
    bool line_flag = false;


    printf("Enter text : ");
    
    while ((ch = getchar()) != STOP){
        
        if (!isspace(ch))
            n_chars++;

        if (!isspace(ch) && !line_flag){
            n_lines++;
            line_flag = true;
        }
        if (ch == '\n')
            line_flag = false;

        if (!isspace(ch) && !word_flag){
            n_words++;
            word_flag = true;
        }
        if (isspace(ch))
            word_flag = false;

    }

    printf("Characters = %d, Words = %d, Lines = %d\n", n_chars, n_words, n_lines);

    return 0;
}