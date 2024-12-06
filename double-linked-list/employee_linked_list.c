#include "employee_linked_list.h"
#include "stdlib.h"
#include <stdio.h>

employee_linked_list_t *create_list() {
    employee_linked_list_t *list = malloc(sizeof(employee_linked_list_t));
    if (list == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    list->size = 0;
    list->head = NULL;
    list->tail = NULL;

    return list;
}
