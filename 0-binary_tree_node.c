#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: pointer to the newly created node NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node1;

	node1 = malloc(sizeof(binary_tree_t));
	if (!node1)
		return (NULL);
	node1->n = value;
	node1->parent = parent;
	node1->left = NULL;
	node1->right = NULL;
	return (node1);

}
