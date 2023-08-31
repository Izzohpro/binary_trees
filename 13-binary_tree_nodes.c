#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at 
 * 		       least 1 child in a binary tree
 * @tree: pointer to the rootnode of the tree to count number of nodes
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += ((tree->left || tree->right) ? 1 : 0);
		node += binary_tree_nodes(tree->right);
		node += binary_tree_nodes(tree->left);
		return (node);
	}
}
