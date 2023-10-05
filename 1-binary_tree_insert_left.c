#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as left-child of another node
 ** @parent: is a pointer to node
 ** @value: is the value to store in the new node
 ** Return: a pointer to created node, or NULL on failure
 *************************************************************************/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *w_node;

if (!parent)
return (NULL);

w_node = binary_tree_node(parent, value);
if (!w_node)
return (NULL);

if (parent->left)
{
parent->left->parent = w_node;
w_node->left = parent->left;
}
parent->left = w_node;
return (w_node);
}
