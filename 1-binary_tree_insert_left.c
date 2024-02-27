#include <stdlib.h>

/**
 * binary_tree_insert_left - A pointer to the node where
 * the left child is to be inserted.
 * @parent:
 * @value:
 * Return: Pointer to the created node
 * else Null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
{
binary_tree_t *element;

binary_tree_t *element = malloc(sizeof(binary_tree_t));

if (element == NULL)
	return NULL;

if (parent->left != NULL)
	{
	element->left = parent->left;
	parent->left->parent = element;
	}
	parent->left = element;

return (element);
}
