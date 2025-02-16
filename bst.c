/*write a c program to create a binary tree*/
#include<stdio.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}tree;
tree* insertion(tree *root,int data)
{
    tree *temp=(tree*)malloc(sizeof(tree));
    if(root==NULL)
    {
        root=temp;
        root->data=data;
        return root;
    }
    else
    {
        if(data>root->data)
        {
           root->right=insertion(root->right,data);
        }
        else if(data<root->data)
        {
            root->left=insertion(root->left,data);
        }
        else
        {
            printf("%d is equal to the root so not added.");
        }
    }
    return root;
}