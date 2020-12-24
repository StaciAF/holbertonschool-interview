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
/**	int temp;*/

	new = binary_tree_node(*root, value);
	if (root == NULL)
		return (NULL);
	if (*root == NULL)
	{
		*root = new;
		return (new);
	}
	return (new);
/**
 *	if (new->n > new->parent->n)
 *	{
 *		temp = new->parent->n;
 *		parent->n = new->n;
 *		new->n = temp;
 *		return (new);
 *	}
*/
}
