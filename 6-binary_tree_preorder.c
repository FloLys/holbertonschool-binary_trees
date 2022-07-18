#include "binary_trees.h"
/**
 *binary_tree_preorder -  goes through a binary tree using pre-order traversal goes through a binary tree using pre-order traversal
 *@tree: Pointer to tree.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	
	func(tree->n);
	
	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);
	return;
}
