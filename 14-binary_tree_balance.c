#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 ** @tree: pointer to the root node of the tree
 ** Return: The balance factor, If tree is NULL, return 0
 ***********************************************************************/
int binary_tree_balance(const binary_tree_t *tree)
{
int left = 0, right = 0;

if (!tree)
return (0);

if (tree->right)
right = 1 + binary_tree_height(tree->right);
if (tree->left)
left = 1 + binary_tree_height(tree->left);

return (left - right);
}
