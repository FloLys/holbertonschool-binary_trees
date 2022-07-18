#include "binary_trees.h"
/**
 *binary_tree_leaves - post-order traversal through a binary tree counts leaves
 *@tree: Pointer to tree.
 *Return: amount of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		counter += binary_tree_size(tree->left);

	if (tree->right != NULL)
		counter += binary_tree_size(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (counter + 1);
	else
		return (0);
}
