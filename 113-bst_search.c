#include "binary_trees.h"
/**
 *bst_search - Search for a value.
 *@tree: pointer to root node.
 *@value: Key to look for.
 *Return: Pointer to node
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);

	if (tree->n == value)
		return (tree);
	if (tree->left)
		bst_search(tree->left);
	if (tree->right)
		bst_search(tree->right);
	return (NULL);
}
