#include <stdio.h>
#include <stdlib.h>
// Node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
// Function to insert into BST
struct Node* insert(struct Node* root, int data) {
    if (root == NULL)
        return createNode(data);
    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    return root;
}
// Pre-order traversal
void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
// In-order traversal
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
// Post-order traversal
void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
// Print tree (right aligned)
void printTree(struct Node* root, int space) {
    if (root == NULL)
        return;
    space += 10;
    printTree(root->right, space);
    printf("\n");
    for (int i = 10; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);
    printTree(root->left, space);
}
int main() {
    struct Node* root = NULL;
    int n, data, choice;
    printf("Enter the number of elements to insert into the tree: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insert(root, data);
    }
    printTree(root, 0);
    while (1) {
        printf("\nMenu:\n");
        printf("1. Pre-order traversal\n");
        printf("2. In-order traversal\n");
        printf("3. Post-order traversal\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Pre-order traversal: ");
            preorder(root);
            printf("\n");
            break;
        case 2:
            printf("In-order traversal: ");
            inorder(root);
            printf("\n");
            break;
        case 3:
            printf("Post-order traversal: ");
            postorder(root);
            printf("\n");
            break;
        case 4:
            printf("Exiting\n");
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
