#include "binary_trees.h"
/**
 * binary_tree_depth - A function that measures depth
 * @tree: The tree
 * Return: 0 or 1
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_right = 0;
	size_t depth_left = 0;

	if (!tree)
		return (0);

	if (!tree->parent)
		return (0);

	depth_right = binary_tree_depth(tree->parent);

	if (depth_left > depth_right)
		return (depth_left + 1);
	else
		return (depth_right + 1);
}
