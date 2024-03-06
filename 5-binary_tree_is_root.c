#include "binary_trees.h"

/**
 * binary_tree_is_root -  checks if current node is a root node.
 * @node: Pointer to check if node is root.
 *
 * Return: 1 if root else 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
	{
	return (1);
	}
	return (0);
}
