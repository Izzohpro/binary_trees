#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * binary_tree_balance - function that measures balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure balance factor
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		right = ((int)binary_tree_height_b(tree->right));
		left = ((int)binary_tree_height_b(tree->left));
		total = left - right;
	}
	return (total);
}

