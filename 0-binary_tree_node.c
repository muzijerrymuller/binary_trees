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

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
{
	binary_tree_t *lumina = (binary_tree_t *)malloc(sizeof(*lumina));

	if (!lumina)
	return NULL;

	*lumina = (binary_tree_t){.parent = parent, .value = value, .left = NULL, .right = NULL};

	return lumina;
}
