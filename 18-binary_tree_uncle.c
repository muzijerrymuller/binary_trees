#include "binary_trees.h"

/**
 * binary_tree_uncle - Checks for the uncle of a node.
 * @node: pointer to the node that will help us find the uncle of a node.
 *
 * Return: Pointer to uncle node else 0
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
{
return (NULL);
}
else
{
if (node->parent == node->parent->parent->left)
{
return (node->parent->parent->right);
}
return (node->parent->parent->left);
}
}
