#include "binary_trees.h"

/**
 * binary_tree_size - Entry point
 * @tree: binary_tree parameter
 * Return: size_t
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
  size_t number_left = 0, number_right = 0;

  if (!tree)
    return (0);
  number_left = binary_tree_size(tree->left);
  number_right = binary_tree_size(tree->right);
  return (number_left + number_right + 1);
}
