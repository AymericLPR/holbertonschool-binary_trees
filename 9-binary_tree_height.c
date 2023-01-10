#include "binary_trees.h"

/**
 * binary_tree_height - Entry point
 * @tree: binary_tree parameter
 * Return: the hightest side
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);
	if (left > right)
		return (left);
	return (right);
}
