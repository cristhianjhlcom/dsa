#pragma once

#include "employee.h"
#include "employee_node.h"

typedef struct EmployeeLinkedList employee_linked_list_t;
typedef struct EmployeeLinkedList {
    int size;
    employee_node_t *head;
    employee_node_t *tail;
} employee_linked_list_t;

employee_linked_list_t *create_list();
void prepend(employee_linked_list_t *l, employee_t *item);
