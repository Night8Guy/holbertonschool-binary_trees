#include "binary_trees.h"
/**
 * binary_tree_sibling - The sibling node
 * @node: The node
 * Return: 1 or 0
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}

/**
 * binary_tree_uncle - The uncle
 * @node: The node
 * Return: Depends
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node || !node->parent)
		return (NULL);
	uncle = binary_tree_sibling(node->parent);
	return (uncle);
}
