#include "binary_trees.h"
/**
 *binary_tree_balance - measures the level balance of a binary tree
 *@tree: pointer to root node
 *Return: lvl of balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t counter_r = 0, counter_l = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		counter_l = 1 + binary_tree_balance(tree->left);

	if (tree->right != NULL)
		counter_r = 1 + binary_tree_balance(tree->right);

	return (counter_l - counter_r);
}
