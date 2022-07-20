#include "binary_trees.h"
/**
 *binary_tree_levelorder - Binary tree travel level-order traversal.
 *@tree: pointer to root node.
 *@func: Pointer to function to call in each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	unsigned int level = 0, cap_level = 0;

	if (!tree || !func)
		return;

	cap_level = binary_tree_height(tree) + 1;

	level = 1;

	while (level <= cap_level)
	{
		level_order_traversal_aux(tree, func, level);
		level++;
	}
}
/**
*level_order_traversal_aux - goes through a binary tree using post-order traverse.
 *@tree: pointer to root node.
 *@func: Pointer to function to call in each node.
*/
void level_order_traversal_aux(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		level_order_traversal_aux(tree->left, func, level - 1);
		level_order_traversal_aux(tree->right, func, level - 1);
	}
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

	if (tree->left != NULL)
		counter_l = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		counter_r = 1 + binary_tree_height(tree->right);

	if (counter_r > counter_l)
		return (counter_r);
	else
		return (counter_l);
}
