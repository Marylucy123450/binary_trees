#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* Check if tree is NULL */
	if (tree)
	{
		size_t left_height = 0, right_height = 0;

		/* Calculate the height of the left subtree */
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;

		/* Calculate the height of the right subtree */
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		/* Return the maximum height of the left and right subtrees, plus 1 */
		return ((left_height > right_height) ? left_height : right_height);
	}
	/* If tree is NULL, return 0 */
	return (0);
}
