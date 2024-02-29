#include "binary_trees.h"
/**
 * binary_tree_preorder - A function that goes through a binary tree using pre-order traversal.
 * @tree:This is a pointer to the root node of the tree to traverse
 * @func:This is a pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	int data;

	if (tree == NULL)
		return;

	if (func == NULL)
		return;

	data = tree->n;
	func(data);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
