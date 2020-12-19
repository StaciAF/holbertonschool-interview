#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node to create
 * @value: new node value to be used
 * Return: pointer to new node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = NULL;

    new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL)
        return (NULL);
    new_node->parent = NULL;
    new_node->value = NULL;
    return (new_node);
}
