#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_insert_left - creates a binary tree node
* @parent: pointer to the node to insert the left-child in
* @value: value to store in the new node
*
* Return: a pointer to the new node or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node, *temp;
if (parent == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
{
return (NULL);
}
if (parent->left == NULL)
{
new_node->parent = parent;
parent->left = new_node;
new_node->left = NULL;
}
else
{
temp = parent->left;
parent->left = new_node;
new_node->parent = parent;
new_node->left = temp;
temp->parent = new_node;
}
new_node->right = NULL;
new_node->n = value;
return (new_node);
}
