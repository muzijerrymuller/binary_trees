#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_leaves - Checks how many leaves there rae in a binary tree.
 * @tree: Pointer to count how many leaves there are in a tree.
 *
 * Return: Number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);

size_t leaves = 0, left = 0, right = 0;

left = binary_tree_leaves(tree->left);
right = binary_tree_leaves(tree->right);
return ((!left && !right) ? leaves + 1 : leaves + 0);
}
