#include "binary_trees.h"
/**
 * isPerfectTree - checks if a bianry treee is perfect
 ** @tree: pointer to root node of the tree to count the number of leaves
 ** @depth: the depth of the given node
 ** @level: node level
 ** Return: 1 SUCCESS, otherwise 0 (incl if tree is NULL)
 **************************************************************************/
int isPerfectTree(const binary_tree_t *tree, int depth, int level)
{
binary_tree_t *a = tree->right, *b = tree->left;

if (tree == NULL)
return (0);

if (b == NULL && a == NULL)
{
return (1);
}
if (binary_tree_depth(b) != binary_tree_depth(a))
return (0);
if (b == NULL || a == NULL)
return (0);

return (isPerfectTree(tree->left, depth, level + 1) &&
			isPerfectTree(tree->right, depth, level + 1));
}
/**
 * binary_tree_is_perfect - check if the node is perfect or not
 ** @tree: pointer to the root of the binary tree
 ** Return: 1 SUCCESS, otherwise 0 (incl if tree is NULL)
 *****************************************************************/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int depth = 0;

if (tree == NULL)
return (0);
depth = binary_tree_depth(tree);
return (isPerfectTree(tree, depth, 0));
}
