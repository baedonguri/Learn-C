#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int element;
typedef struct DlistNode {
    element data;
    struct DlistNode *llink;
    struct DlistNode *rlink;
} DlistNode;

typedef struct DequeType {
    DlistNode *head;
    DlistNode *tail;
} DequeType;

void init(DequeType *dq){
    dq->head = dq->tail = NULL;
}

void error(char *message){
    fprintf(stderr, "%s\n", message);
    exit(1);
}

element is_empty(DequeType *dq){
    if(dq->head == NULL)    return TRUE;
    else return FALSE;
}

DlistNode *create_node(DlistNode *llink, element item, DlistNode *rlink){
    DlistNode *node = (DlistNode *)malloc(sizeof(DlistNode));
    if(node == NULL)    error("Error! Memory Allocation Error");
    node->llink = llink;
    node->data = item;
    node->rlink = rlink;
    return node;
}

void add_rear(DequeType *dq, element item){
    DlistNode *new_node = create_node(dq->tail, item, NULL);
    if(is_empty(dq))
        dq->head = new_node; //비어있다면 new_node가 덱의 헤드가 됨
    else
        dq->tail->rlink = new_node; //덱의 꼬리의 rlink가 new_node를 가리키게 함
    dq->tail = new_node; // 덱의 꼬리는 new_node가 됨
}


void add_front(DequeType *dq, element item){
    DlistNode *new_node = create_node(NULL, item, dq->head);
    if(is_empty(dq))
        dq->tail = new_node;
    else
        dq->head->llink = new_node;
    dq->head = new_node;
}

element delete_front(DequeType *dq){
    element item;
    DlistNode *removed_node;
    
    if(is_empty(dq))    error("Error! Empty Deque");
    else{
        removed_node = dq->head;
        item = removed_node -> data;
        dq->head = dq->head->rlink;
        free(removed_node);
        if(dq->head == NULL)
            dq->tail = NULL;
        else
            dq->head->rlink = NULL;
    }
    return item;
}

element delete_rear(DequeType *dq){
    element item;
    DlistNode *removed_node;
    
    if(is_empty(dq))    error("Error! Empty Deque");
    else{
        removed_node = dq->tail;
        item = removed_node->data;
        dq->tail = dq->tail->llink;
        free(removed_node);
        
        if(dq->tail == NULL)
            dq->head = NULL;
        else
            dq->tail->rlink = NULL;
    }
    return item;
}

void display(DequeType *dq){
    DlistNode *p;
    printf("(");
    for(p=dq->head;p!=NULL;p=p->rlink){
        printf("%d", p->data);
    }
    printf(")\n");
}

void main(void){
    DequeType deque;
    
    init(&deque);
    add_front(&deque, 10);
    add_front(&deque, 20);
    add_rear(&deque, 30);
    display(&deque);
    
    delete_front(&deque);
    delete_rear(&deque);
    display(&deque);

}
