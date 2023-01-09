#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_depth - Entry point
* Return: size_t
* @tree: binary_tree parameter
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;
	if (!tree || !tree->parent)
		return (count);
	count = 1 + binary_tree_depth(tree->parent);
	return (count);
}
