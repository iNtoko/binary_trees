#include "binary_trees.h"

/**
 * binary_tree_node - function that creates binary tree node.
 *@parent: Pointer to parent node of node to create.
 *@value: Value to put in the new node.
 * Return: Function must return pointer to new node or NULL if not.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
