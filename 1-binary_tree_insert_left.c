#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node
 * @parent: pointer to parent
 * @value: The value
 * Return: NUlL or failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left;

	if (!parent)
		return (NULL);

	left = binary_tree_node(parent, value);

	if (!left)
		return (NULL);

	left->left = parent->left;

	if (left->left)
		left->left->parent = left;

	parent->left = left;

	return (left);
}
