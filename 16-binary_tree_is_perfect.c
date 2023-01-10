#include "binary_trees.h"

/**
 * binary_tree_nodes - Entry point
 * @tree: binary_tree parameter
 * Return: size_t
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	count += 1;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}

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

/**
 * binary_tree_is_perfect - Entry point
 * @tree: binary_tree parameter
 * Return: 1 -> perfect, 0 -> not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) == 0)
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
		if (left == right)
			return (1);
	return (0);
}
