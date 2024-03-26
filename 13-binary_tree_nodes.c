#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: The number of nodes with at least 1 child, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	/* Check if tree is NULL */
	if (!tree)
		return (0);

	/* Check if the current node has at least 1 child */
	if (tree->left || tree->right)
		nodes++;

	/* Recursively count nodes in the left and right subtrees */
	nodes += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (nodes);
}
