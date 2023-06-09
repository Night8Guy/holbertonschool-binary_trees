#include "binary_trees.h"
/**
 * binary_tree_height - The tree height
 * @tree: The tree
 * Return: Depends on height
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

/**
 * binary_tree_balance - The balance of the tree
 * @tree: The tree
 * Return: The balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_1 = 0, height_2 = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		height_1 = binary_tree_height(tree->left);
	}
	else
	{
		height_1 = height_1 - 1;
	}

	if (!tree->right)
	{
		height_2 = height_2 - 1;
	}
	else
	{
		height_2 = binary_tree_height(tree->right);
	}
	return (height_1 - height_2);
}
