// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>


// struct tree
// {
//   int key;
//   struct tree *left;
//   struct tree *right;
// };


// struct tree *root = NULL;
// int inputValue()
// {
//   int n;
//   printf("Enter: ");
//   scanf("%d", &n);
//   return n;
// }


// struct tree *createNode(int data)
// {
//   struct tree *node = malloc(sizeof(struct tree));
//   node->key = data;
//   node->left = NULL;
//   node->right = NULL;
//   return node;
// }


// struct tree *insertNode(struct tree *root, int value, int index, int n)
// {
//   if (index <= n)
//   {
//     struct tree *temp = createNode(value);
//     root = temp;

//     root->left = insertNode(root->left, 2 * value, 2 * index, n);
//     root->right = insertNode(root->right, 2 * value + 1, 2 * index + 1, n);
//   }

//   return root;
// }


// void displayTree(struct tree *root, int space)
// {
//   if (root == NULL)
//     return;

//   space += 5;

//   displayTree(root->right, space);

//   printf("\n");
//   for (int i = 5; i < space; i++)
//     printf(" ");
//   printf("%d\n", root->key);

//   displayTree(root->left, space);
// }


// int main()
// {
//   int n;
//   printf("Enter the number of nodes: ");
//   scanf("%d", &n);

//   root = insertNode(root, 1, 1, n);

//   printf("\nBinary Tree:\n");
//   displayTree(root, 0);

//   return 0;
// }


#include <stdio.h>
#include <stdlib.h>

struct tree
{
  int key;
  struct tree *left;
  struct tree *right;
};
struct tree *root = NULL;

int inputValue()
{
  int n;
  printf("Enter: ");
  scanf("%d",&n);
  return n;
}

struct tree *createNode(int data)
{
  struct tree *node = malloc(sizeof(struct tree));
  node->key = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}

struct tree *insert(struct tree *node, int data)
{
  if (root==NULL)
  {
    return createNode(data);
  }
  insert(root->left, data);
}
int main()
{
  int n;
  printf("Enter the number of nodes: ");
  scanf("%d",&n);
  root = insert(root, inputValue());
  for (int i = 1; i<n; i++)
  {
    insert(root, inputValue);
  }
}