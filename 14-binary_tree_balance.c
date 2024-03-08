#include "binary_trees.h"

/**
 * binary_tree_height - Measures balance factor of a binary tree.
 * @tree: Pointer to the element that measures balance factor.
 *
 *
 * Return: Binary tree height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
	size_t left = 0;
	size_t right = 0;

	left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return ((left > right) ? left : right);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree.
 * @tree: Pointer to the element that measures balance factor.
 *
 *
 * Return: Binary tree balace factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	int left = tree->left ? (int)binary_tree_height(tree->left) : 0;
	int right = tree->right ? (int)binary_tree_height(tree->right) : 0;
	
	return (left - right);
}
