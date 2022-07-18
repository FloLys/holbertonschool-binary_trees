#include "binary_trees.h"
/**
 *binary_tree_inorder - in-order traversal goes through a binary tree;
 *@func: pointer to funtion
 *@tree: Pointer to tree.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);

	func(tree->n);

	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);
}
