#include "binary_trees.h"

/**
 * height - measure height of a subtree
 * @tree: pointer to node
 *
 * Return: height or 0 if tree is NULL
 */
static int height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	return (1 + (left > right ? left : right));
}

/**
 * binary_tree_balance - measure balance factor of binary tree
 * @tree: pointer to root node
 *
 * Return: balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = height(tree->left);
	if (tree->right)
		right = height(tree->right);

	return (left - right);
}
