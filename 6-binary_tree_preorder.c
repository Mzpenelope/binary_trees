#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree
 ** @tree: is a pointer to the root node
 ** @func: is a pointer to a function
 ****************************************************/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

func(tree->n);
binary_tree_preorder(tree->right, func);
binary_tree_preorder(tree->left, func);
}
