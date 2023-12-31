#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 ** @tree: is a pointer to the node to measure the depth
 ** Return: The depth of the node, if tree is NULL return 0
 *********************************************************************/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
const binary_tree_t *tmpp;

if (!tree)
return (0);

tmpp = tree;

while (tmpp->parent)
{
depth += 1;
tmpp = tmpp->parent;
}
return (depth);
}
