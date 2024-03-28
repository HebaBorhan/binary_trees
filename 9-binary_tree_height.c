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
left_ht = binary_tree_height(tree->left);
right_ht = binary_tree_height(tree->right);
height = (left_ht > right_ht) ? left_ht : right_ht;
return (height + 1);
}
