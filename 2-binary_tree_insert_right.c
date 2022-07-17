#include "binary_trees.h"
/**
 *binary_tree_insert_right - Creates a new right node in a BT, works as branch.
 *@parent: pointer to parent of new node.
 *@value: value in INT to assign to new node
 *Return: Pointer to new Node, NULL if failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	else
		new->right = NULL;
	new->left = NULL;

	parent->right = new;
	new->n = value;
	return (new);
}
