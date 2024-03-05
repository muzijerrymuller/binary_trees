#include "binary_trees.h"

/**
 * binary_tree_delete -Deletion of a
 * binary tree.
 * @tree: Tree that is to be freed.
 * Return: If null othing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	{
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
	}
}
