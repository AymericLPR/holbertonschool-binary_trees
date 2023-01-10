#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Entry point
 * Description: 'returns a binary tree'
 * Return: size_t
 * @tree: binary_tree node
 * @func: function pointer
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	void (*d)(int);

	d = func;

	if (tree)
	{
		d(tree->n);
		binary_tree_preorder(tree->left, d);
		binary_tree_preorder(tree->right, d);
	}
}
