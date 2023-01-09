#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Entry point
 * Description: 'returns a binary tree'
 * Return: size_t
 * @parent: binary_tree parameter
 * @value: int parameter
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));


	if (!parent)
		return (0);



	if (!newnode)
		return (0);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent->left)
	{
		newnode->left = parent->left;
		newnode->left->parent = newnode;
	}

	parent->left = newnode;
	return (newnode);
}

