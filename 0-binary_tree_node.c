#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Generates a binary tree node.
 * @parent: Parent pointer for the
 * creation of the new node.
 * @value: The value to put in the new node.
 * Return: If error happens then NULL.
 * else - Pointer to the created node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *binary_node = malloc(sizeof(binary_tree_t));

if (binary_node != NULL)
{
binary_node->n = value;
binary_node->parent = parent;
binary_node->left = NULL;
binary_node->right = NULL;
}

return (binary_node);
}
