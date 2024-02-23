#include <binary_trees.h>
#include <stdlib.h>

/**
 * binary_tree_node - Generates new node.
 * @parent: - New created node parent.
 * @value: - New node value.
 * Return: new node else NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (parent->left == NULL)
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
	}
	else
		newNode->left = NULL;

	return (newNode);
}
