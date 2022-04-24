#include <stdio.h>
#include <string.h>
#include <stdbool.h>



#define WIDTH 40
#define NAME "Dong-Joon Bae"
#define ADDRESS "Incheon, Korea"


void print_multiple_chars(char c, int n_stars, bool end1){
    for (int i=0; i < n_stars; ++i)
        printf("%c", c);
    
    if (end1)
        printf("\n");
}

void print_info(char string[]){
    int n_blanks=0;
    n_blanks = (WIDTH - strlen(string)) / 2;

    print_multiple_chars(' ', n_blanks, false);
    printf("%s\n", string);
}

int main(void){

    print_multiple_chars('*', WIDTH, 1);

    print_info(NAME);
    print_info(ADDRESS);
    print_info("I love you");


    print_multiple_chars('*', WIDTH, 1);


    return 0;
}
