#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct {
    int key;
    struct TreeNode *left, *right;
}TreeNode;


// 반복적인 탐색 함수
TreeNode *search(TreeNode* node, int key){
    while(node != NULL){
        if (key == node->key) return node;
        else if (key < node->key)
            node = node->left;
        else
            node = node->right;
    }
    return NULL; // 탐색에 실패할 경우 NULL값 반환
}

 // 매개변수 root는 이진탐색트리의 루트노드를 가리킨다.
 // 삽입 함수에서는 루트 노드 포인터가 변경되어야 하므로 루트 포인터의 포인터가 전달되었음

 // key를 이진 탐색 트리 root에 삽입한다.
 // key가 이미 root안에 있으먄 삽입되지 않는다.
void insert_node(TreeNode **root, int key){
    TreeNode *p, *t; //p = 부모노드,t = 현재노드
    TreeNode *n; // n = 새로운 노드

    t = *root;
    p = NULL;

    // 탐색을 먼저 수행
    while (t != NULL){
        if (key == t->key)  return; // 이미 존재하는 경우
        p = t;
        if (key < p->key) t = p->left;
        else t = p->right;
    }
    // key가 트리 안에 없으므로 삽입 가능
    // 트리 노드 구성
    n = (TreeNode*)malloc(sizeof(TreeNode));
    if (n == NULL) return;
    
    // 데이터 복사
    n->key = key;
    n->left = n->right = NULL;

    // 부모노드와 연결
    if (p != NULL)
        if (key < p->key)
            p->left = n;
        else p->right = n;
    else
        *root = n;
}

void delete_node(TreeNode **root, int key){
    TreeNode *p, *child, *succ, *succ_p, *t; // p = 부모노드, child = 자식노드, t = 현재노드, succ = 후계자노드, succ_o = 후계자노드의 부모

    // key를 갖는 노드 t를 탐색, p는 t의 부모노드
    p = NULL;
    t = *root;

    // key를 갖는 노드 t를 탐색
    while (t != NULL && t->key != key){
        p = t;
        t = (key < p->key) ? p->left : p->right;
    }
    // 탐색이 종료된 시점에 t가 NULL이라면 트리 안에 key가 없음
    if (t == NULL){
        printf("key is not in the tree");
        return;
    }

    // 첫번째 경우: 단말 노드인 경우
    if ((t->left==NULL) && (t->right == NULL)){
        // 부모 노드의 자식 필드를 NULL로 만든다.
        if (p != NULL){
            if (p->left == t)
                p->left = NULL;
            else p->right = NULL;
        }
        // 만약 부모노드가 NULL이라면 삭제되는 노드가 루트 노드임
        else
            *root = child;
    }
    // 두번째 경우 : 하나의 자식만 갖는 경우
    else if ((t->left==NULL) || (t->right == NULL)){
        child = (t->left != NULL) ? t->left : t->right;
        if (p != NULL){
            if (p->left == t) // 부모를 자식과 연결
                p->left = child;
            else p->right = child; 
        }
        else // 만약 부모 노드가 NULL이면 삭제되는 노드가 루트
            *root = child;
    }
    // 세번째 경우 : 두개의 자식을 갖는 경우
    else{
        // 오른쪽 서브 트리에서 후계자를 찾는다.
        succ_p = t;
        succ = t->right;

        // 후계자를 찾아서 계속 왼쪽으로 이동
        while (succ->left != NULL){
            succ_p = succ;
            succ = succ->left;
        }
        // 후속자의 부모와 자식을 연결
        if (succ_p->left == succ)
            succ_p->left = succ->right;
        else
            succ_p->right = succ->right;
    // 후속자가 가진 키 값을 현재 노드에 복사
        t->key = succ->key;
        // 원래 후속자 삭제
        t = succ;
    }
    free(t);
}


int main(void){

    return 0;
}