#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree);

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

int binary_tree_is_full(const binary_tree_t *tree)
{
int l = 0, r = 0;

if (tree == NULL)
{
return (0);
}
else if (tree->left == NULL && tree->right == NULL)
return (1);

else
{
if (tree->left && tree->right)
{
l = binary_tree_is_full(tree->left);
r = binary_tree_is_full(tree->right);
if (l == 0 || r == 0)
{
return (0);
}
return (1);
}
else if (!tree->left && !tree->right)
{
return (1);
}
else
{
return (0);
}
}
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

return (c && d) &&
	binary_tree_is_full(tree->left) && binary_tree_is_full(tree->left);
}
return (0);
}
