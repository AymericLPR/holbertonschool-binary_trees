#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Entry point
 * Description: 'returns a binary tree'
 * Return: size_t
 * @tree: binary_tree node
 * @func: function pointer
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		void (*d)(int);

		d = func;

		binary_tree_postorder(tree->left, d);
		binary_tree_postorder(tree->right, d);
		d(tree->n);

	}
}
