#include "binary_trees.h"

/**
 * array_to_heap - builds the Max Binary Heap tree from the array
 * @array: the pointr to the first elemnt of the array to be converted
 * @size: the number of element in the array
 *
 * Return: a pointer to the root node of the created Binary Heap
 *         NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
