#include "binary_trees.h"

/**
 * binary_tree_height - Entry point
 * @tree: binary_tree parameter
 * Return: the highest side
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

/**
 * binary_tree_balance - Entry point
 * @tree: binary_tree parameter
 * Return: the balance of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);
	return (left_height - right_height);
}

/**
 * binary_tree_is_perfect - Entry point
 * @tree: binary_tree parameter
 * Return: 1 -> perfect, 0 -> not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
  if (!tree)
    return (0);
  if (binary_tree_balance(tree) == 0)
    return (1);
  return (0);
}
