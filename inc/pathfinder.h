#ifndef PTHFNDR_H
#define PTHFNDR_H

#include "./libmx/inc/libmx.h"

void pathfinder(char c);
char **mx_file_to_islands(const char *file);
int mx_positive_atoi(char *str);
char **mx_find_uniques(char **str);
bool mx_is_elem(char **arr, char *str);
int mx_get_index(char *str, char **uniques);
int *mx_str_to_int(char **str, char **uniques);
void print_matrix(int **matrix); //remove this function after finish project
int **mx_create_matrix(int *nums);

#endif