#include "binary_trees.h"
/**
 * find_node - Function to find node in a tree
 * @root: Root of the tree to evaluate
 * @node: Node to find
 * Return: 1 if exits 0 if no
 */
int find_node(binary_tree_t *root, binary_tree_t *node)
{

	if (root == NULL)
		return (0);
	if (node == root)
		return (1);
	if (node->n < root->n)
		return (find_node(root->left, node));
	if (node->n > root->n)
		return (find_node(root->right, node));
	return (0);
}
/**
 * croos_tree - Cross the tree checking if each node exist correctly
 * @root: Root node of tree
 * @node: Current node to evaluate
 * Return: 1 if is BST0 if no
 */
int croos_tree(binary_tree_t *root, binary_tree_t *node)
{
	if (root && node)
	{
		int aux = 0;

		aux = find_node(root, node);
		if (node->left)
			aux &= croos_tree(root, node->left);
		if (node->right)
			aux &= croos_tree(root, node->right);
		return (aux);
	}
	return (0);
}
/**
 * binary_tree_is_bst - Check if its a correctly bst tree
 * @tree: Tree to check
 * Return: 1 if is bst 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (croos_tree((binary_tree_t *)tree, (binary_tree_t *)tree));
}
