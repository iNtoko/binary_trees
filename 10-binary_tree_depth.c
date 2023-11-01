#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth of a node in a binary tree.
 *@tree: pointer to node to measure the depth.
 * Return: If tree is NULL, function must return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
