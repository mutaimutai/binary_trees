#include "binary_trees.h"
/**
 * binary_tree_height - This functions measures the height of a binary tree
 * @tree:Is a pointer to the root node of the tree to measure the height
 * Return:The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);

	if (left > right)
		return (left);
	return (right);
}


