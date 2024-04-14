#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
};

struct Node *root = NULL;

struct Node *createNode(int value)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

struct Node *insert(struct Node *root, int value)
{
  if (root == NULL)
  {
    return createNode(value);
  }

  if (value < root->data)
  {
    root->left = insert(root->left, value);
  }
  else
  {
    root->right = insert(root->right, value);
  }

  return root;
}

int maximum(struct Node *root)
{
  if (root->right == NULL)
  {
    return root->data;
  }
  maximum(root->right);
}

int minimum(struct Node *root)
{
  if (root->left == NULL)
  {
    return root->data;
  }
  minimum(root->left);

}

int inputNodeValue()
{
  int n;
  printf("value : ");
  scanf(" %d", &n);
  return n;
}

int main()
{
  int n, max, min;
  printf("number of nodes : ");
  scanf(" %d", &n);
  int value = inputNodeValue();
  root = insert(root, value);
  for (int i = 0; i < n - 1; i++)
  {
    insert(root, inputNodeValue());
  }

  max = maximum(root);
  min = minimum(root);
  printf("\nMax = %d\t Min = %d", max, min);
  return 0;
}

