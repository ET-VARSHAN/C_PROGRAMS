#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node* newnode(int val) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->left = temp->right = NULL;
    return temp;
}
struct node* insert(struct node* root, int val) {
    if(root == NULL)
        return newnode(val);
    if(val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}
struct node* findMin(struct node* root) {

    while(root->left != NULL)
        root = root->left;

    return root;
}
struct node* deleteNode(struct node* root, int key) {

    if(root == NULL)
        return NULL;
    if(key < root->data)
        root->left = deleteNode(root->left, key);
    else if(key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if(root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
        else if(root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        else {
            struct node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }

    return root;
}
void inorder(struct node* root) {
    if(root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
int main() {
    struct node* root = NULL;
    root = insert(root, 20);
    insert(root, 1);
    insert(root, 25);
    insert(root, 50);
    insert(root, 12);
    insert(root, 6);
    insert(root,23);
    printf("Before Deletion: ");
    inorder(root);
    root = deleteNode(root,12);
    printf("\nAfter Deletion: ");
    inorder(root);
}
