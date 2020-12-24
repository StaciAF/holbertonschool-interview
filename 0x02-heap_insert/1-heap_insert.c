#include "binary_trees.h"

/**
 * heap_insert - inserts a value in a Max Binary Heap
 * @root: double pointer to the root node
 * @value: value to be stored in inserted node
 * Return: inserted node or NULL
 */

heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *new = NULL;

	new = malloc(sizeof(heap_t));
	if (new == NULL)
		return (NULL);
	if (root == NULL)
		return (NULL);
	new = binary_tree_node(*root, value);
	return (new);
}
