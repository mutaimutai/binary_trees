#include "binary_trees.h"
void preorder(binary_tree_t *root)
{
	if (root == NULL)
		return;

	printf("%d  ",root->n);
	preorder(root->left);
	preorder(root->right);
}
