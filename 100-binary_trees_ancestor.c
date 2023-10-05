#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor (LCA) of two nodes
 ** @first: is a pointer to the first node
 ** @second: is a pointer to the second node
 ** Return: A pointer to the lowest common ancestor node of the two given nodes
 ** If no common ancestor was found return NULL.
 ****************************************************************************/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
size_t depth_first = 0, depth_second = 0;

if (!first || !second)
return (NULL);
depth_first = binary_tree_depth(first);
depth_second = binary_tree_depth(second);

while (depth_first > depth_second)
first = first->parent, depth_first -= 1;
while (depth_first < depth_second)
second = second->parent, depth_second -= 1;

while (first)
{
if (first == second)
return ((binary_tree_t *)first);
first = first->parent;
second = second->parent;
}

return (NULL);
}
