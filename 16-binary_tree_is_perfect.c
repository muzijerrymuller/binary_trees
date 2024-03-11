#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function checks if the node is a leaf.
 * @node: points to the node that will allow us to check.
 * Return: 1 if leaf else 0.
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

/**
 * binary_tree_height - Binary tree height.
 * @tree: Pointer the node that will allow us to check.
 *
 * Return: tree height else 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	a = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);
	if (a >= b)
		return (1 + a);
	return (1 + b);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the node that will allot us to check.
 *
 * Return: 1 If it is a perfect binary tree else 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *a, *b;

	if (tree == NULL)
		return (0);
	a = tree->left;
	b = tree->right;
	if (binary_tree_is_leaf(tree))
		return (1);
	if (a == NULL || b == NULL)
		return (0);
	if (binary_tree_height(a) == binary_tree_height(b))
	{
		if (binary_tree_is_perfect(a) && binary_tree_is_perfect(b))
			return (1);
	}
	return (0);
}
