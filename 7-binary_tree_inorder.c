#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - Entry point
 * Description: 'returns a binary tree'
 * Return: size_t
 * @tree: binary_tree node
 * @func: function pointer
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		void (*d)(int);

		d = func;

		binary_tree_inorder(tree->left, d);
		d(tree->n);
		binary_tree_inorder(tree->right, d);
	}
}
