#include "binary_trees.h"
/**
 *binary_tree_balance - measures the level balance of a binary tree
 *@tree: pointer to root node
 *Return: lvl of balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int counter_l = 0, counter_r = 0;

	if (tree == NULL)
		return (0);

	counter_l = binary_tree_balance_left(tree);
	counter_r = binary_tree_balance_right(tree);
	return (counter_l - counter_r);

}

/**
 *binary_tree_balance_right - aux function, checkes only far right.
 *@tree: Pointer to tree.
 *Return: height of far right.
 */

int binary_tree_balance_right(const binary_tree_t *tree)
{
	int counter_r = 0;

	if (tree->right != NULL)
		counter_r = 1 + binary_tree_balance_right(tree->right);

	return (counter_r);
}

/**
 *binary_tree_balance_left - aux function, checkes only far left.
 *@tree: Pointer to tree.
 *Return: height of far left.
 */

int binary_tree_balance_left(const binary_tree_t *tree)
{
	int counter_l = 0;

	if (tree->left != NULL)
		counter_l = 1 + binary_tree_balance_left(tree->left);
	return (counter_l);
}
