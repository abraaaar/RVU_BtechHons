#include <stdio.h>
#include <stdlib.h>

struct Node
{
  char data;
  struct Node *left;
  struct Node *right;
};

struct Node *root = NULL;

struct Node *createNode(char value)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

struct Node *insert(struct Node *root, char value)
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

char maximum(struct Node *root)
{
  if (root->right == NULL)
  {
    return root->data;
  }
  maximum(root->right);
}

char minimum(struct Node *root)
{
  if (root->left == NULL)
  {
    return root->data;
  }
  minimum(root->left);

}

char inputNodeValue()
{
  char n;
  printf("value : ");
  scanf(" %c", &n);
  return n;
}

int main()
{
  int n;
  char max, min;
  printf("number of nodes : ");
  scanf(" %d", &n);
  char value = inputNodeValue();
  root = insert(root, value);
  for (int i = 0; i < n - 1; i++)
  {
    insert(root, inputNodeValue());
  }

  max = maximum(root);
  min = minimum(root);
  printf("\nMax = %c\t Min = %c", max, min);
  return 0;
}


int main()
{
  int i, num = 0;
  while (1)
  {
    
    scanf("%d",&i);
    if (num == 0)
    {
      root = insert(root, value);
      num++;
      continue;
    }
    if (i == -1)
    {
      break;
    }
    else 
    {
      insert(root, i);
    }
  }
}