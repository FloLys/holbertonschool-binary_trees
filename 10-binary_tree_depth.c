#include "binary_trees.h"
/**
 *binary_tree_depth - measures the depth of a binary tree
 *@tree: pointer to root node
 *Return: 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		counter = 1 + binary_tree_depth(tree->parent);

	return (counter);
}
