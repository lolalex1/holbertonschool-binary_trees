#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of a node
 * @tree: pointer to node
 *
 * Return: depth or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
