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

	if (1 == binary_tree_is_full(tree))
		if (0 == binary_tree_balance(tree))
			return(1);
	return (0);
}

