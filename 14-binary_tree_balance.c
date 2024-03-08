#include "binary_trees.h"

/**
 * binary_tree_balance - Measures balance factor of a binary tree.
 * @tree: Pointer to the element that measures balance factor.
 *
 * Return: Binary tree height else return NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree.
 * @tree: Pointer to the element that measures balance factor.
 *
 * Return: Binary tree balace factor else return NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
