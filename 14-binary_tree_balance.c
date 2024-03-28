#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
/**
* binary_tree_balance - function that measures the balance
* factor of a binary tree
* @tree: pointer to the root node of the tree
*
* Return: The balance factor of the binary tree or 0 (tree NULL)
*/
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left_ht, right_ht;
int balance_factor = 0;
if (tree == NULL)
{
return (balance_factor);
}
left_ht = binary_tree_height(tree->left);
right_ht = binary_tree_height(tree->right);
balance_factor = left_ht - right_ht;
return (balance_factor);
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
