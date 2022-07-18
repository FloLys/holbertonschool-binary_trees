#include "binary_trees.h"
/**
 *binary_tree_size - post-order traversal through a binary tree counts nodes.
 *@tree: Pointer to tree.
 *Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		counter += binary_tree_size(tree->left);

	if (tree->right != NULL)
		counter += binary_tree_size(tree->right);
	return (counter + 1);
}
