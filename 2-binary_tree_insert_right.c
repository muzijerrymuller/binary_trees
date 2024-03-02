#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts node in the left
 * of the parent.
 * @parent: Node parent.
 * @value: Node value.
 * Return: New node else NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *element = malloc(sizeof(binary_tree_t));
	if (element == NULL)
	{
	return (NULL);
	}

	element->n = value;
	element->parent = parent;
	element->left = NULL;
	element->right = NULL;

	if (parent->right != NULL)
	{
	element->right = parent->right;
	parent->right->parent = element;
	}
	
	parent->right = element;

	return (element);
}
