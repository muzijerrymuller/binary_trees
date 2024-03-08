#include "binary_trees.h"

/**
 * binary_tree_is_full - This checks if binary tree is a full binary tree.
 * @tree: the pointer that will allow us to check if binary tree is full.
 * Return: If binary tree is full return 1 else return 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
int l = 0, r = 0;

if (tree == NULL)
{
return (0);
}
else if (tree->left == NULL && tree->right == NULL)
return (1);

else
{
if (tree->left && tree->right)
{
l = binary_tree_is_full(tree->left);
r = binary_tree_is_full(tree->right);
if (l == 0 || r == 0)
{
return (0);
}
return (1);
}
else if (!tree->left && !tree->right)
{
return (1);
}
else
{
return (0);
}
}
}
