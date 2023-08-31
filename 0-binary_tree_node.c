#include "binary_trees.h"

/**
 * binary_tree_node - function create a tree node.
 * @parent: parent of the node.
 * @value: value of the new node
 * Return: new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;
	new_node->parent = parent;
	return (new_node);
}
