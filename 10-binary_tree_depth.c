#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of the node, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* Check if tree is NULL */
	if (!tree)
		return (0);

	/* Recursively calculate the depth until the root is reached */
	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
