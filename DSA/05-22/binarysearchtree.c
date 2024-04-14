#include <stdio.h>
#include <stdlib.h>


struct bst
{
  int key;
  struct bst *left;
  struct bst *right;
};

struct bst *root = NULL;



int enterValue()
{
  int n;
  printf("Enter: ");
  scanf("%d",&n);
  return n;
}



struct bst *createNode(int data)
{
  struct bst *new = malloc(sizeof(struct bst));
  new->key = data;
  new->left = NULL;
  new->right = NULL;
  return new;
}



struct bst *insert(struct bst *root, int data)
{
  if (root == NULL)
  {
    return createNode(data);
  }

  if (data < root->key)
  {
    root->left = insert(root->left, data);
  }
  else 
  {
    root->right = insert(root->right, data);
  }
  return root;
}



int height()
{
  
}



int main()
{
  int n;
  printf("Enter the number of nodes: ");
  scanf("%d",&n);
  int data = enterValue();
  root = insert(root, data);
  for (int i=1; i<n; i++)
  {
    insert(root, enterValue());
  }
}

