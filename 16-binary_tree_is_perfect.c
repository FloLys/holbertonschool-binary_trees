#include "binary_trees.h"
/**
 *binary_tree_is_perfect - checks if a BT is perfect.
 *@tree: Pointer to tree.
 *Return: 1 for perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_is_full(tree) == 1)
		if (binary_tree_balance(tree) == 0)
			return (1);
	return (0);
}
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

/**
 *binary_tree_is_full - checks if a BT is full.
 *@tree: Pointer to tree.
 *Return: 1 for full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int retorno = 0;

	if (!tree)
		return (0);

	retorno = binary_tree_is_full_aux(tree);

	if (retorno != 0)
		return (0);
	else
		return (1);
}

/**
 *binary_tree_is_full_aux - checks for 1 child leaf.
 *@tree: Pointer to tree.
 *Return:amount of 1 child nodes.
 */

size_t binary_tree_is_full_aux(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		counter += binary_tree_is_full_aux(tree->left);

	if (tree->right != NULL)
		counter += binary_tree_is_full_aux(tree->right);

	if (tree->left != NULL && tree->right == NULL)
		return (counter + 1);
	else if (tree->left == NULL && tree->right != NULL)
		return (counter + 1);
	else
		return (counter);
}
