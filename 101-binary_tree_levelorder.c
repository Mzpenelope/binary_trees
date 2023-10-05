#include "binary_trees.h"
/**
 * goes_in_level - Goes through a given level of a binary tree
 ** @tree: a pointer to the root node of the tree to traverse
 ** @func: a pointer to a function to call for each node.
 ** @level: level in the tree to goes through
 **************************************************************/
void goes_in_level(const binary_tree_t *tree, void (*func)(int), size_t level)
{
if (!tree)
return;
if (level == 0)
func(tree->n);
else if (level > 0)
{
goes_in_level(tree->left, func, level - 1);
goes_in_level(tree->right, func, level - 1);
}
}
/**
 * binary_tree_levelorder - goes through a binary tree
 ** @tree: a pointer to the root node of the tree to traverse
 ** @func: a pointer to a function to call for each node.
 ** The value in the node is passed as a parameter to this function.
 **********************************************************************/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
size_t tree_height = 0, level;

if (!tree || !func)
return;
tree_height = binary_tree_height(tree);
for (level = 0; level <= tree_height; level++)
goes_in_level(tree, func, level);
}
