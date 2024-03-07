#include "binary_trees.h"

/**
 * binary_tree_size - function that return the size of a tree
 * @tree: Pointer to root that will be used to measure size.
 *
 * Return: Tree size.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
return (tree) ? 1 + binary_tree_size(tree->left)
		+ binary_tree_size(tree->left) : 0;
}
