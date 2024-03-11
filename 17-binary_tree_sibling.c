#include "binary_trees.h"

/**
 * binary_tree_sibling - Checks if a node is sibling
 * @node: Node that helps us check if the node is  sibling.
 * Return: Sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (0);

return ((node->parent->left == node)
		? node->parent->right : node->parent->left);
}
