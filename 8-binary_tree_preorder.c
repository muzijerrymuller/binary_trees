#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse binary tree using post order traversal.
 * @tree: Pointer to the node of the tree to traverse.
 * @func: pointer to function that will call each node.
 * Return: Nothing.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

else
{
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
}
~     
