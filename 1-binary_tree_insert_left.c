#include "binary_trees.h"
/**
 *binary_tree_insert_left - Creates a new left node in a BT, works as branch.
 *@parent: pointer to parent of new node.
 *@value: value in INT to assign to new node
 *Return: Pointer to new Node, NULL if failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return(NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}

	parent->left = new;
	new->n = value;
	return (new);
}
