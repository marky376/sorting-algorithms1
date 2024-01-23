#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void insertion_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

#endif
