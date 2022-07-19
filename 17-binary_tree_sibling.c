#include "binary_trees.h"
/**
 *binary_tree_sibling - Deletes a binary tree
 *@node: Pointer to tree.
 *Return: NULL if no parent or no sibling.Pointer to node if found.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent != NULL)
	{
		if (node == node->parent->left)
			return (node->parent->right);
		if (node == node->parent->right)
			return (node->parent->left);
	}
	return (NULL);
}
