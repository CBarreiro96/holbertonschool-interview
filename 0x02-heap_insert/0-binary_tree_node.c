#include "binary_trees.h"
/**
 *binary_tree_node - Making the initial node
 *@parent: The parent node
 *@value: The value being stored in the node
 *Return: The returning the node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    /*Structure pointer*/
	binary_tree_t *node;

    /*Allocate memory*/
	node = malloc(sizeof(binary_tree_t));
	
    /*Validate if it is null*/
    if (node == NULL)
		return (NULL);
	
    /*Add node*/
    nodeNew->left = nodeNew->right = NULL;
    node->n = value;
    node->parent = parent;

	return (node);
}