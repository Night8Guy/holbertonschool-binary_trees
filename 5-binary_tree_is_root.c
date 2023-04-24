#include "binary_trees.h"
/**
 * binary_tree_is_root - The root to be checked
 * @node: The node to check
 * Return: 1 or 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	else if (!node->parent)
		return (1);

	return (0);
}
