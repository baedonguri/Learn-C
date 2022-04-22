#include <stdio.h>
#include <stdlib.h>


int main(void){

    int c;
    FILE *file = NULL;
    char file_name[] = "/Users/donguri/Workspace/Inflearn/Clang/my_file.txt"; //TODO : use scanf(...)

    file = fopen(file_name, "r"); // read or write
    if (file == NULL)
    {
        printf("Failed to open file.\n");
        exit(1);
    }

    while ((c=getc(file)) != EOF)
        putchar(c);

    fclose(file);




    return 0;
}