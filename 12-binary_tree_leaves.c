#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: The number of leaves in the tree, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	/* Check if tree is NULL */
	if (!tree)
		return (0);

	/* Check if the current node is a leaf */
	if (!tree->left && !tree->right)
		return (1);

	/* Recursively count leaves in the left and right subtrees */
	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (leaves);
}
