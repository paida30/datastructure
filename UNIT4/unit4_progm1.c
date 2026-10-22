#include <stdio.h>
#include <stdlib.h>

struct Node
{
   char data;
   struct Node *left;
   struct Node *right;
};

struct Node* createNode(char data)
{
   struct Node* newNode;

   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = data;
   newNode->left =NULL;
   newNode->right =NULL;

   return newNode;

};

void preorder(struct Node* root)
{
   if (root !=NULL)
   {
     printf("%c",root->data);
     preorder(root->left);
     preorder(root->right);
   }
}

void inorder(struct Node* root)
{
   if (root !=NULL)
   {
     inorder(root->left);
     printf("%c",root->data);
     inorder(root->right);
   }
}

void postorder(struct Node* root)
{
   if (root !=NULL)
   {
     postorder(root->left);
     postorder(root->right);
     printf("%c",root->data);

   }
}
void main()
{
    struct Node* root = createNode('p');

    root->left = createNode('a');
    root->right = createNode('a');


    root->left->right = createNode('d');
    root->left->left = createNode('i');

    printf("Preorder:");
    preorder(root);

    printf("\n Inorder:");
    preorder(root);

    printf("\nPostorder:");
    postorder(root);

}
