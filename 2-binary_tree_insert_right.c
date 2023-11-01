#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts node as the
 *					right-child of another node
 *
 * @parent: Pointer to node to insert right-child in
 * @value: Value to store in the new node
 *
 * Description: If parent already has right-child, new node
 *				must take its place, and old right-child must
 *				be set as right-child of new node.
 *
 * Return: A pointer to the created node, or
 *			NULL on failure or
 *			if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
