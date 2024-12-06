#pragma once

#include "employee.h"

typedef struct EmployeeNode employee_node_t;
typedef struct EmployeeNode {
    employee_t *employee;
    employee_node_t *next;
    employee_node_t *prev;
} employee_node_t;
