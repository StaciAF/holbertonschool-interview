#include "binary_trees.h"

/**
 * sorted_array_to_avl - uses a sorted array to create an avl tree
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * Return: pointer to AVL tree root node or NULL
 */

avl_t *sorted_array_to_avl(int *array, size_t size)
{
	return (make_tree(array, 0, size - 1, NULL));
}

/**
 * make_tree - recursively builds AVL tree from array
 * @arr: pointer to start of array
 * @start: beginning of array index
 * @end: end of array index
 * @recent: parent to current
 * Return: pointer to root of built AVL tree
 */
avl_t *make_tree(int *arr, int start, int end, avl_t *recent)
{
	int mid;
	avl_t *root = NULL;

	if (start > end)
		return (NULL);
	mid = (start + end) / 2;
	root = create_node(arr[mid]);
	if (root != NULL)
	{
		root->parent = recent;
		root->left = make_tree(arr, start, mid - 1, root);
		root->right = make_tree(arr, mid + 1, end, root);
	}
	return (root);
}

/**
 * create_node - creates a new binary tree node
 * @midpoint: int, middle index of array
 * Return: binary tree with created node
 */
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
