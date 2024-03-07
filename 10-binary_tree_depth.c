#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_depth - Calculates depth from root.
 * @tree: node that checks the depth.
 *
 * Return: Nothing.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
	{
		return 1 + binary_tree_depth(tree->parent);
	}
	return (0);
}
