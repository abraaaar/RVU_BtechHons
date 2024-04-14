#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};

struct Node *createNode(int value) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

struct Node *insert(struct Node *root, int value) {
  if (root == NULL) {
    return createNode(value);
  }

  if (value < root->data) {
    root->left = insert(root->left, value);
  } else {
    root->right = insert(root->right, value);
  }

  return root;
}

void preorderTraversal(struct Node *root) {
  if (root == NULL) {
    return;
  }

  printf("%d ", root->data);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

void inorderTraversal(struct Node *root) {
  if (root == NULL) {
    return;
  }

  inorderTraversal(root->left);
  printf("%d ", root->data);
  inorderTraversal(root->right);
}

void postorderTraversal(struct Node *root) {
  if (root == NULL) {
    return;
  }

  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ", root->data);
}

int inputNodeValue() {
  int n;
  printf("value : ");
  scanf(" %d", &n);
  return n;
}

int main() {
  struct Node *r = NULL;

  int n;
  printf("number of nodes : ");
  scanf(" %d", &n);

  root = insert(root, 50);
  for (int i = 0; i < n;  i++)
    insert(root, inputNodeValue());

  printf("Preorder traversal: ");
  preorderTraversal(root);
  printf("\n");

  printf("Inorder traversal: ");
  inorderTraversal(root);
  printf("\n");

  printf("Postorder traversal: ");
  postorderTraversal(root);
  printf("\n");

  return 0;
}