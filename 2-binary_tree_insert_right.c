#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as right-child of another node
 ** @parent: is a pointer to the node
 ** @value: is the value to store in the new node
 ** Return: a pointer to the created node, or NULL on failure
 **************************************************************************/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *w_node;

if (!parent)
return (NULL);

w_node = binary_tree_node(parent, value);
if (!w_node)
return (NULL);

if (parent->right)
{
w_node->right->parent = w_node;
w_node->right = parent->right;
}
parent->right = w_node;
return (w_node);
}
