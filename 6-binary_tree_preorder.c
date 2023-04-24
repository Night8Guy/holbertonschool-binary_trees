#include "binary_trees.h"
/**
 * binary_tree_preorder - Binary tree in preorder
 * @tree: The tree
 * @func: The function
 * Return: 1 or 0
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	else
	{
		func(tree->n);

		if (tree->left)
			binary_tree_preorder(tree->left, func);

		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
