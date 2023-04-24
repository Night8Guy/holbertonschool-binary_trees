#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node
 * @parent: parent
 * @value: The value
 * Return: NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right;

	if (!parent)
		return (NULL);

	right = binary_tree_node(parent, value);

	if (!right)
		return (NULL);

	right->right = parent->right;

	if (right->right)
		right->right->parent = right;

	parent->right = right;

	return (right);
}
