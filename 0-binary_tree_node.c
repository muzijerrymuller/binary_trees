#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Generates new node.
 * @parent: - New created node parent.
 * @value: - New node value.
 * Return: new node else NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *nn = malloc(sizeof(binary_tree_t));

if (!nn)
return (NULL);

nn->n = value;
nn->parent = parent;
nn->left = nn->right = NULL;

return (nn);
}
