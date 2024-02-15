#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Generates a binary tree node.
 * @parent: A pointer to parent of the node to create.
 * @value: The value to put in the new node.
 * Return: If error happens then NULL.
 * else - Pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
{
binary_tree_t *new_node;

new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;

return (new_node);
}
