#include "binary_trees.h"
/**
 * binary_tree_nodes - Checks number of nodes with children.
 * @tree: Tree to check number of nodes with children.
 * Return: It returns the abount of nodes with children.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t element = 0;

if (tree)
{
if (tree->left || tree->right)
	element = 1;
element += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
}
return (element);
}
