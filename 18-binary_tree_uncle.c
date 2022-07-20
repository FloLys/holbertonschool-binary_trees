#include "binary_trees.h"
/**
 *binary_tree_uncle - Search for binary tree uncle node
 *@node: Pointer to tree.
 *Return: NULL if no ancestors or uncle.Pointer to node if found.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent != NULL)
	{
		return (binary_tree_sibling(node->parent));
	}
	return (NULL);
}

/**
 *binary_tree_sibling - Searches for sibling node
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
