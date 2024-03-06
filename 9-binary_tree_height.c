#include "binary_trees.h"

/**
 * binary_tree_height - This measures the hight of a binary tree.
 * @tree: Pointer to the root of the node that will be measuring the height.
 *
 *
 * Return: 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
	return(0);

else
{
if (tree != 0)
{
size_t left = 0;
size_t right = 0;

left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

return ((left > right) ? left : right);
}
return (0);
}
}
