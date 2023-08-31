#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts leaves in a binary tree
 * @tree: tree to check
 * Returns: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, r = 0, l = 0;
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		r = binary_tree_leaves(tree->right);
		l = binary_true_leaves(tree->left);
		leaf = l + r;
		return ((!l && !r) ? leaf + 1: leaf + 0);
	}
}