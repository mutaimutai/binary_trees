#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node of the new node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (0);
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);

}
