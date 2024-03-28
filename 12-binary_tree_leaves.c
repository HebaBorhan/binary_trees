#include "binary_trees.h"
/**
* binary_tree_leaves - function that that counts the leaves
* in a binary tree
* @tree: pointer to the root node of the tree
*
* Return: The size of the binary tree or 0 (tree NULL)
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves = 0;
if (tree == NULL)
{
return (leaves);
}
leaves += tree->left ? (binary_tree_leaves(tree->left)) : 1;
leaves += tree->right ? (binary_tree_leaves(tree->right)) : 1;
return (leaves);
}
