#include "binary_trees.h"

/**
 * binary_tree_leaves - Checks how many leaves there rae in a binary tree.
 * @tree: Pointer to count how many leaves there are in a tree.
 * Return: Number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves = 0;

if (tree)
{
if (!tree->left && !tree->right)
	leaves = 1;
else
leaves += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
}
return (leaves);
}
