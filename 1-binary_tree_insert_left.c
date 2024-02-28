#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return NULL;
	binary_tree_t *newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return NULL;
	newnode->left = NULL;
	newnode->n = value;
	newnode->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = newnode;
		newnode->parent = parent;
	}
	else
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
		parent->left = newnode;
		newnode->parent = parent;
	}
	return (newnode);
}