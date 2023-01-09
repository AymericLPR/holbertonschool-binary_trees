#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Entry point
 * @parent:  binary_tree parameter
 * @value: int parameter
 * Return: size_t
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);

	if (parent->right == NULL)
		parent->right = newnode;
	else
	{
	  newnode->right = parent->right;
	  parent->right->parent = newnode;
	  parent->right = newnode;
	}
	return (newnode);
}
