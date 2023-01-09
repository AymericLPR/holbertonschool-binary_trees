#include "binary_trees.h"

/**
 * binary_tree_is_full - Entry point
 * @tree: binary_tree parameter
 * Return: 1 if there is two child
 *         and 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		return (left * right);
	}
	return (0);

}

