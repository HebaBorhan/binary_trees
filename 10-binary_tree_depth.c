#include "binary_trees.h"
/**
* binary_tree_depth - function that measures the depth
* of a node in a binary tree
* @tree: pointer to the node to measure the depth
*
* Return: The depth of the binary tree from node or 0 (tree NULL)
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
if (tree == NULL)
{
return (depth);
}
depth = tree->parent ? ((binary_tree_depth(tree->parent)) + 1) : 0;
return (depth);
}
