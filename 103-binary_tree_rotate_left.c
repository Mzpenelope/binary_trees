#include "binary_trees.h"
/**
 * binary_tree_rotate_left - rotate left
 ** @tree: binary tree
 ** Return: pointer to new root
 ***********************************************/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *auxx;

if (!tree || !tree->right)
return (tree);

auxx = tree->right;
tree->parent = auxx;
auxx->parent = tree->parent;

tree->right = auxx->left;
if (tree->right)
tree->right->parent = tree;

auxx->left = tree;

return (auxx);
}
