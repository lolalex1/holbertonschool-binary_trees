#include "binary_trees.h"

/**
 * binary_tree_preorder - go through tree using pre-order
 * @tree: pointer to root node
 * @func: function to call on each node value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
