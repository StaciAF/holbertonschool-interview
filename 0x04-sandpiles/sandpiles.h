#ifndef SANDPILES_H
#define SANDPILES_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
static void print_grid(int grid[3][3]);
void topples(int temp[3][3]);
void add_grains(int grid1[3][3], int temp[3][3]);
bool temp_to_grid1(int grid1[3][3], int temp[3][3]);

#endif
