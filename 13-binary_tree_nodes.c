#include "binary_trees.h"
/**
 * binary_tree_nodes - Binary nodes
 * @tree: The tree
 * Return: The number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		node_count++;

	node_count = node_count + binary_tree_nodes(tree->left);
	node_count = node_count + binary_tree_nodes(tree->right);
	return (node_count);
}
