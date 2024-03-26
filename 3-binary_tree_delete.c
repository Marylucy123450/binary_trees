#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* Base case: If tree is NULL, do nothing */
	if (!tree)
		return;

	/* Recursively delete left and right subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Once the subtrees are deleted, free the current node */
	free(tree);
}
