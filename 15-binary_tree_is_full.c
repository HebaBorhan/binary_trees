#include "binary_trees.h"
/**
* binary_tree_is_full - function that checks if a binary tree is full
* @tree: pointer to the root node of the tree
*
* Return: 1 (the binary tree is full) or 0 (otherwise or tree NULL)
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
int checker;
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
return (1);
else if ((tree->left != NULL && tree->right == NULL) ||
(tree->left == NULL && tree->right != NULL))
return (0);
else
{
checker = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
return (checker);
}
}
