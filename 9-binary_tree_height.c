#include "binary_trees.h"
/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: pointer to the root node of the tree to traverse
*
* Return: The height of the binary tree or 0 (tree NULL)
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_ht, right_ht, height = 0;
if (tree == NULL)
{
return (height);
}
left_ht = tree->left ? ((binary_tree_height(tree->left)) + 1) : 0;
right_ht = tree->right ? ((binary_tree_height(tree->right)) + 1) : 0;
height = (left_ht > right_ht) ? left_ht : right_ht;
return (height);
}
