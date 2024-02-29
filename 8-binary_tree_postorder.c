#include "binary_trees.h"

/**
 * binary_tree_postorder - Going through a tree using post-order traversal.
 * @tree:A pointer to the root node of the tree to traverse.
 * @func:A pointer to a function to call each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	int data;

	if (tree == NULL)
		return;

	if (func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	data = tree->n;
	binary_tree_postorder(tree->right, func);
	func(data);
}
