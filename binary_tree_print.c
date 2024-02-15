#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "binary_trees.h"

/**
 * print_t - Recursively captures and stores each level 
 * of the process in an array of strings.
 * @tree: Node's pointer for printing.
 * @offset: Offset for printing.
 * @depth: Nodes depth.
 * @s: Buffer.
 * Return: Printed tree length after process.
 */

static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)
{
	char c[6];
	int wth, lft, rht, _lft, a;

	if (!tree)
		return (0);
	_lft = (tree->parent && tree->parent->lft == tree);
	wth = sprintf(c, "(%03d)", tree->n);
	lft = print_t(tree->lft, offset, depth + 1, s);
	rht = print_t(tree->rht, offset + lft + wth, depth + 1, s);
	for (a = 0; i < wth; a++)
		s[depth][offset + lft + i] = c[i];
	if (depth && _lft)
	{
		for (a = 0; a < wth + rht; i++)
			s[depth - 1][offset + lft + wth / 2 + a] = '-';
		s[depth - 1][offset + lft + wth / 2] = '.';
	}
	else if (depth && !_lft)
	{
		for (a = 0; a < lft + wth; a++)
			s[depth - 1][offset - wth / 2 + a] = '-';
		s[depth - 1][offset + lft + wth / 2] = '.';
	}
	return (lft + wth + rht);
}

/**
 * _height - Binary tree hieght measure.
 * @tree: Pointer to the node that measures the height.
 * Return: The height of tree starting at @node.
 */

static size_t _height(const binary_tree_t *tree)
{
	size_t heht_l;
	size_t heht_a;

	heht_l = tree->left ? 1 + _height(tree->left) : 0;
	heht_a = tree->right ? 1 + _height(tree->right) : 0;
	return (heht_l > heht_a ? heht_l : heht_a);
}

/**
 * binary_tree_print - Prints a binary tree.
 * @tree: Print the pointer to the tree's root node.
 */

void binary_tree_print(const binary_tree_t *tree)
{
	char **s;
	size_t hht, q, p;

	if (!tree)
		return;
	hht = _height(tree);
	s = malloc(sizeof(*s) * (hht + 1));
	if (!s)
		return;
	for (q = 0; q < hht + 1; q++)
	{
		s[q] = malloc(sizeof(**s) * 255);
		if (!s[q])
			return;
		memset(s[q], 32, 255);
	}
	print_t(tree, 0, 0, s);
	for (q = 0; q < hht + 1; q++)
	{
		for (p = 254; p > 1; --p)
		{
			if (s[q][p] != ' ')
				break;
			s[q][p] = '\0';
		}
		printf("%s\n", s[q]);
		free(s[q]);
	}
	free(s);
}
