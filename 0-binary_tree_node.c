#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 ** @parent: pointer to the parent node of the node to create
 ** @value: value to put in the new node
 ** Return:  pointer to the new node, or NULL on failure
 ************************************************************/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *w_node;

w_node = malloc(sizeof(binary_tree_t));

if (!w_node)
return (NULL);
w_node->n = value;
w_node->parent = parent;
w_node->right = NULL;
w_node->left = NULL;

return (w_node);
}
