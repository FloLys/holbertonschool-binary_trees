#include "binary_trees.h"
/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: pointer to root node
 *Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter_r = 0, counter_l = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		counter_l = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		counter_r = 1 + binary_tree_height(tree->right);

	if (counter_r > counter_l)
		return (counter_r);
	else
		return (counter_l);
}
