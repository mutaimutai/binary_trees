#include "binary_trees.h"

/**
 * binary_tree_inorder -  A function that traverses a binary tree in in-order.
 * @tree:Is a pointer to the root node of the tree to traverse
 * @func:A pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	int data;

	if (tree == NULL)
		return;

	if (func == NULL)
		return;

	data = tree->n;
	binary_tree_inorder(tree->left, func);
	func(data);
	binary_tree_inorder(tree->right, func);

}
