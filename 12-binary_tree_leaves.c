#include "binary_trees.h"

/**
 * binary_tree_leaves - Checks how many leaves there rae in a binary tree.
 * @tree: Pointer to count how many leaves there are in a tree.
 * Return: Number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree);
{
if (!tree)
	return (0);

size_t leaves = (!tree->left && !tree->right) ? 1 : 0;

leaves += binary_tree_leaves(tree->left);
leaves += binary_tree_leaves(tree->right);

return (leaves);
}
