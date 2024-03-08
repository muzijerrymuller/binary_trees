#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 * Return: If NULL retun 0 else return balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: If NULL retun 0 else return Height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t b = 0; 
		size_t a = 0;

		b = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		a = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((b > a) ? b : a);
	}
	return (0);
}
