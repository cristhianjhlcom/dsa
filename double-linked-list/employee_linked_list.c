#include "employee_linked_list.h"
#include "employee.h"
#include "employee_node.h"
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

void prepend(employee_linked_list_t *l, employee_t *item) {
    employee_node_t *n = malloc(sizeof(employee_node_t));
    if (n == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    n->employee = item;
    n->next = l->head;
    n->prev = NULL;
    if (l->head != NULL) {
        l->head->prev = n;
    }
    l->head = n;
    if (l->tail == NULL) {
        l->tail = n;
    }
    l->size++;
}

void append(employee_linked_list_t *l, employee_t *item) {
    employee_node_t *n = malloc(sizeof(employee_node_t));
    if (n == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    n->employee = item;
    n->next = NULL;
    n->prev = l->tail;
    if (l->tail != NULL) {
        l->tail->next = n;
    }
    l->tail = n;
    if (l->head == NULL) {
        l->head = n;
    }
    l->size++;
}

employee_t *destroy(employee_linked_list_t *l) {
    if (l->head == NULL) {
        printf("Nothing to remove from the list.\n");
        exit(1);
    }
    employee_node_t *tmp_head = l->head;
    if (tmp_head->next != NULL) {
        tmp_head->next->prev = l->head->prev;
    }
    l->head = tmp_head->next;
    employee_t *employee = tmp_head->employee;
    l->size--;
    free(tmp_head);
    if (l->head == NULL) {
        l->tail = NULL;
    }
    return employee;
}
