#include "binary_trees.h"
/**
* binary_tree_nodes - function that counts the nodes
* with at least 1 child in a binary tree
* @tree: pointer to the root node of the tree
*
* Return: The nodes number of the binary tree or 0 (tree NULL)
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t left_tree, right_tree, nodes = 0;
if (tree == NULL)
{
return (nodes);
}
nodes += (!tree->left && !tree->right) ? 0 : 1;
left_tree = binary_tree_nodes(tree->left);
right_tree = binary_tree_nodes(tree->right);
nodes +=  left_tree + right_tree;
return (nodes);
}
