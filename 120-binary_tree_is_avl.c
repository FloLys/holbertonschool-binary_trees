#include "binary_trees.h"
#include <stdio.h>
/**
 *binary_tree_is_avl - measures the level balance of a binary tree
 *@tree: pointer to root node
 *Return: lvl of balance
 */

int binary_tree_is_avl(const binary_tree_t *tree)
{
	int counter_l = 0, counter_r = 0;

	if (tree == NULL)
		return (0);

	counter_l = binary_tree_height(tree->left);

	counter_r = binary_tree_height(tree->right);

	return (counter_l - counter_r);
}

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

	counter_l = 1 + binary_tree_height(tree->left);

	counter_r = 1 + binary_tree_height(tree->right);

	if (counter_r > counter_l)
		return (counter_r);
	else
		return (counter_l);
}
