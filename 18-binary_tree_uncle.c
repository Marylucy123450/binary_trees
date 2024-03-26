#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Check if node is NULL or if it doesn't have a parent or grandparent */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* Check if the parent is the left child of the grandparent */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right); /* Return right child as uncle */

	/* If not, return the left child as uncle */
	return (node->parent->parent->left);
}
