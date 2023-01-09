#include "binary_trees.h"

/**
 * binary_tree_leaves - Entry point
 * @tree: binary_tree parameter
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
  size_t count = 0;

  if (!tree)
    return (0);
  if (!tree->left && !tree->right)
    return (1);
  count += binary_tree_leaves(tree->left);
  count += binary_tree_leaves(tree->right);
  return (count);
}
