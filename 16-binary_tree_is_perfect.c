#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
/**
* binary_tree_is_perfect - function that checks if a binary tree is perfect
* @tree: pointer to the root node of the tree
*
* Return: 1 (the binary tree is perfect) or 0 (otherwise or tree NULL)
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int checker;
size_t left_ht, right_ht;
if (tree == NULL)
{
return (0);
}
left_ht = binary_tree_height(tree->left);
right_ht = binary_tree_height(tree->right);
if (left_ht != right_ht)
return 0;
if (tree->left == NULL && tree->right == NULL)
return (1);
else if ((tree->left != NULL && tree->right == NULL) ||
(tree->left == NULL && tree->right != NULL))
return (0);
else
{
checker = binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right);
return (checker);
}
}
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
left_ht = tree->left ? (binary_tree_height(tree->left)) : 0;
right_ht = tree->right ? (binary_tree_height(tree->right)) : 0;
height = (left_ht > right_ht) ? left_ht : right_ht;
return (height + 1);
}
