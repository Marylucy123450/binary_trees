#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree usin post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree or func is NULL */
	if (!tree || !func)
		return;

	/* Recursively traverse the left subtree */
	binary_tree_postorder(tree->left, func);

	/* Recursively traverse the right subtree */
	binary_tree_postorder(tree->right, func);

	/* Call the function for the current node */
	func(tree->n);
}
