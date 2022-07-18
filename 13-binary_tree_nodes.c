#include "binary_trees.h"
/**
 *binary_tree_nodes - traversal through a binary tree counts 1 child nodes
 *@tree: Pointer to tree.
 *Return: amount of 1 child nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		counter += binary_tree_nodes(tree->left);

	if (tree->right != NULL)
		counter += binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (counter + 1);
	else
		return (counter);
}
