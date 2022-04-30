#include <stdio.h>
#include <string.h>
#define MAX_TITLE 40
#define MAX_AUTHOR 40
#define MAX_BOOKS 3 /* maximum number of books */


char* s_gets(char* st, int n){
    char* ret_val;
    char* find;

    ret_val = fgets(st, n, stdin); // vs. scanf()
    // n으로 과다하게 입력받는 것을 방지, stdin으로 콘솔 입력을 받을 수 있음
    if (ret_val){
        find = strchr(st,'\n'); // 줄바꿈 찾기
        if (find)
            * find = '\0'; // 줄바꿈이 있다면 NULL character로 바꿔줌
        else
            while (getchar() != '\n') // 그렇지 않으면 버퍼를 다 지워줌
                continue;
    }
    return ret_val;
}

struct book
{
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    float price;
};


int main(){
    struct book library[MAX_BOOKS]; // array of book structure
    
    int count = 0;

    while (1){
        printf("Input a book title or press [Enter] to stop.\n");
        //TODO : input title
        if (s_gets(library[count].title, MAX_AUTHOR) == NULL)break;
        //TODO : break if the first charactre of the input title is '\n
        if (library[count].title[0] == '\0') break;

        printf("Input the author.\n>>");
        //TODO : input author name
        s_gets(library[count].author, MAX_AUTHOR);

        printf("Input the price.\n>>");
        //TODO : input price
        int flag = scanf("%f", &library[count].price);
        //TODO : clear buffer
        while (getchar() != '\n')
            continue;

        count++;

        if (count == MAX_BOOKS){
            printf("No more books.\n");
            break;
        }
    }
    if (count > 0){
        printf("\nThe list of books:\n");
        for (int idx=0; idx < count; idx++)
            printf("\"%s\" written by %s: $%.1f\n", library[idx].title, library[idx].author, library[idx].price);
    }else
        printf("No books to show.\n");


    return 0;
}
