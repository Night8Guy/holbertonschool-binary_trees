#include "binary_trees.h"
/**
 * binary_tree_delete - a function that deletes
 * @tree: The tree to be done something with
 * Return: NULL
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
