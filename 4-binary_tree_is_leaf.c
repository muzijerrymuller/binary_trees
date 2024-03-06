#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if node is a leaf.
 * @node: Pointer to the node that requires checking.
 *
 * Return: 1 if it is a leaf else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
	return (0);

if (!node->left && !node->right)
	return (1);

else
	return (0);
}
