//
//  main.c
//  4.1
//
//  Created by 배동준 on 2021/04/12.
//

#include <stdio.h>
#include <stdlib.h>

#define MAX_LIST_SIZE 100 // 배열의 최대크기

typedef int element;
typedef struct {
    element list[MAX_LIST_SIZE]; // 배열 정의
    int length; // 현재 배열에 저장된 자료들의 갯수
}ArrayListType;

//오류처리 함수
void error(char *message){
    fprintf(stderr, "%s\n", message);
    exit(1);
}

//리스트 초기화
void init(ArrayListType *L){
    L->length = 0;
}

//리스트 초기화

//비어있으면 1 반환
//그렇지 않으면 0 반환
int is_empty(ArrayListType *L){
    return L->length == 0;
}

//가득 차 있으면 1반환
//그렇지 않으면 0 반환
int is_full(ArrayListType *L){
    return L->length == MAX_LIST_SIZE;
}

//리스트 출력
void display(ArrayListType *L){
    int i;
    for(i=0;i<L->length;i++)
        printf("%d\n", L->list[i]);
}

//position : 삽입하고자 하는 위치
//item : 삽입하고자 하는 자료
void add(ArrayListType *L, int position, element item){
    if(!is_full(L) && (position>=0) && (position <= L->length)){
        int i;
        for (i=(L->length-1); i>=position; i--)
            L->list[i+1] = L->list[i];
        L->list[position] = item;
        L->length++;
    }
}

element delete(ArrayListType *L, int position){
    int i;
    element item;
    
    if (position <0 || position >= L->length)
        error("위치오류");
    item = L->list[position];
    for (i=position; i<(L->length-1); i++)
        L->list[i] = L->list[i+1];
    L->length--;
    return item;
}


void clean(ArrayListType *L){
    L -> list == NULL;
    L -> length = 0;
}

void replace(ArrayListType *L, int position, element item){
    L->list[position] = item;
}

int get_entry(ArrayListType *L, int position){
    return L->list[position];
}

int get_length(ArrayListType *L){
    return  L->length;
}

int main(){
    ArrayListType list1;
    ArrayListType *plist;
    
//    init(&list1);
//    add(&list1, 0, 10);
//    add(&list1, 0, 20);
//    add(&list1, 0, 30);
//    display(&list1);
    
    plist = (ArrayListType *)malloc(sizeof(ArrayListType));
    init(plist);
    add(plist, 0, 10);
    add(plist, 0, 20);
    add(plist, 0, 30);
    display(plist);
    
    printf("\n");
    
    replace(plist, 1, 60);
    add(plist, 2, 77);
    display(plist);
    
    printf("\n");
    printf("%d\n",get_entry(plist,1));
    printf("%d\n", get_length(plist));
    
    free(plist);
}
