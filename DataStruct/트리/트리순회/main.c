//
//  main.c
//  7.3
//
//  Created by 배동준 on 2021/05/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left, *right;
} TreeNode;

TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, &n1, NULL};
TreeNode n3 = {16, NULL, NULL};
TreeNode n4 = {25, NULL, NULL};
TreeNode n5 = {20, &n3, &n4};
TreeNode n6 = {15, &n2, &n5};
TreeNode *root = &n6;

void inorder(TreeNode *root){
    if(root){
        inorder(root->left);
        printf("%d\n", root->data);
        inorder(root->right);
    }
}

void pre_order(TreeNode *root){
    if(root){
        printf("%d\n", root->data);
        pre_order(root->left);
        pre_order(root->right);
    }
}

void post_order(TreeNode *root){
    if(root){
        post_order(root->left);
        post_order(root->right);
        printf("%d\n", root->data);
    }
}

void main(void){
    inorder(root);
    pre_order(root);
    post_order(root);
}
