#include "binary_trees.h"

/**
 * binary_tree_postorder - go through tree using post-order
 * @tree: pointer to root node
 * @func: function to call on each node value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
