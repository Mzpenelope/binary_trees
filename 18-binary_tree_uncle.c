#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 ** @node: pointer to node to find uncle
 ** Return: pointer to the uncle node
 ***********************************************/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *u;

if (node == NULL || node->parent == NULL)
return (0);

u = binary_tree_sibling(node->parent);
return (u);
}
