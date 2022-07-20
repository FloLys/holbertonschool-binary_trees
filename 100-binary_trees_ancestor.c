#include "binary_trees.h"
/**
 *binary_trees_ancestor - find lowest common ancestor of two nodes.
 *@first: Pointer to node
 *@second:pointer to node
 *Return: If ancestor was found,pointer to node,otherwise NULL.
 */
binary_tree_t *binary_trees_ancestor(
const binary_tree_t *first, const binary_tree_t *second)
{
	unsigned int depth_first = 0, depth_second = 0;

	if (!first || !second)
		return (NULL);

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}

	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}

	return (NULL);
}

/**
 *binary_tree_depth - measures the depth of a binary tree
 *@tree: pointer to root node
 *Return: 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		counter = 1 + binary_tree_depth(tree->parent);

	return (counter);
}
