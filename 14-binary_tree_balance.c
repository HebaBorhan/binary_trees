#include "binary_trees.h"
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
