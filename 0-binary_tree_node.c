#include "binary_trees.h"
/**
 *binary_tree_node - Creates a new node in a BT, perfect for leaf.
 *@parent: pointer to parent of new node.
 *@value: value in INT to assign to new node
 *Return: Pointer to new Node, NULL if failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
