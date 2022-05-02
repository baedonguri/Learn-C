//
//  main.c
//  7.1
//
//  Created by 배동준 on 2021/05/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


typedef struct TreeNode{
    int data;
    struct TreeNode *left, *right;
} TreeNode;

void main(void){
    TreeNode *n1, *n2, *n3;
    n1 = (TreeNode *)malloc(sizeof(TreeNode));
    n2 = (TreeNode *)malloc(sizeof(TreeNode));
    n3 = (TreeNode *)malloc(sizeof(TreeNode));
    n1->data = 10;
    n1->left = n2;
    n1->right = n3;
    n2->data = 20;
    n2->left = NULL;
    n2->right = NULL;
    n3->data = 30;
    n3->left = NULL;
    n3->right = NULL;
    
}

