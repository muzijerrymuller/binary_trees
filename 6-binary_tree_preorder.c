#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using the pre-order traversal
 * @tree: Pointer to the node of the tree to traverse.
 * @func: pointer to function that will call each node.
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
	return;

else
	{
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	}
}
