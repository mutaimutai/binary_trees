#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a given node is a root node.
 * @node:This is a pointer to the node to check.
 * Return:Returns (0) if node is not root OR returns (1) if node is root.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	binary_tree_is_root(node->left);
	binary_tree_is_root(node->right);
	return (0);
}
