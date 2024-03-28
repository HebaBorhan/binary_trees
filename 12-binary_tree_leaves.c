#include "binary_trees.h"
/**
* binary_tree_leaves - function that counts the leaves
* in a binary tree
* @tree: pointer to the root node of the tree
*
* Return: The size of the binary tree or 0 (tree NULL)
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t left_tree, right_tree, leaves = 0;
if (tree == NULL)
{
return (leaves);
}
leaves += (!tree->left && !tree->right) ? 1 : 0;
left_tree = binary_tree_leaves(tree->left);
right_tree = binary_tree_leaves(tree->right);
leaves +=  left_tree + right_tree;
return (leaves);
}
