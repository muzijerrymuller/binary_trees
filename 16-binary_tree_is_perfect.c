#include "binary_trees.h"

/**
 * binary_tree_is_perfect - This fucntion checks if a tree is perfect.
 * @tree: pointer that will help us check if tree is perfect.
 *
 * Return: whether binary tree is perfect else 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);
        {
                size_t b = 0;
                size_t a = 0;

                b = tree->left ? 1 + binary_tree_height(tree->left) : 1;
                a = tree->right ? 1 + binary_tree_height(tree->right) : 1;

                return ((b > a) ? b : a);
        }
        return (0);
}

/**
 * binary_tree_is_perfect - This fucntion checks if a tree is perfect.
 * @tree: pointer that will help us check if tree is perfect.
 *
 * Return: whether binary tree is perfect else 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);

size_t a = 0;
size_t b = 0;
int c = 0;
int d = 0;

a = binary_tree_height(tree->left);
b = binary_tree_height(tree->right);

if (a == b)
{
c = binary_tree_is_perfect(tree->left);
d = binary_tree_is_perfect(tree->right);

return (c && d);
}
return (0);
}
