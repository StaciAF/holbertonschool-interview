#include "binary_trees.h"

/**
 * sorted_array_to_avl - uses a sorted array to create an avl tree
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * Return: pointer to AVL tree root node or NULL
 */

avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *newTree = NULL;
	size_t midpoint = (size - 1) / 2;

	newTree = create_node(array[midpoint]); /** #047 */
	midpoint /= 2;
	newTree->left = create_node(array[midpoint]); /** #021 */
	newTree->left->parent = newTree;
	midpoint /= 2;
	newTree->left->left = create_node(array[midpoint]); /** #002 */
	newTree->left->left->parent = newTree->left;
	midpoint /= 2;
	newTree->left->left->left = create_node(array[midpoint]); /** #001 */
	newTree->left->left->left->parent = newTree->left->left;
	midpoint /= 2;
	return (newTree);
}

avl_t *create_node(int midpoint)
{
	avl_t *newTree = NULL;

	newTree = malloc(sizeof(avl_t));
	if (newTree == NULL)
		return (NULL);
	newTree->left = NULL;
	newTree->right = NULL;
	newTree->n = midpoint;
	return (newTree);
}
