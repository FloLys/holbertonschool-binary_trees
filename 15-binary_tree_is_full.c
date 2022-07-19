#include "binary_trees.h"
/**
 *binary_tree_is_full - checks if a BT is full.
 *@tree: Pointer to tree.
 *Return: 1 for full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int retorno = 0;

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
