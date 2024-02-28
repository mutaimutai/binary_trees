#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a new binary tree node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

        if (parent == NULL)
                return (NULL);

	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;
	return (newnode);
}
