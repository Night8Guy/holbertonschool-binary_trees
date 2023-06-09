#include "binary_trees.h"
/**
 * binary_tree_height - The height of the binary tree
 * @tree: The tree
 * Return: Height of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_left++;
	height_right = binary_tree_height(tree->right);
	height_right++;

	if (height_left < height_right)
		return (height_right);
	else
		return (height_left);
}
