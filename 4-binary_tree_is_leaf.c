#include "binary_trees.h"
/**
 * binary_tree_is_leaf - a function that deletes
 * @node: The pointer to be checked
 * Return: 1 or 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	else if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
