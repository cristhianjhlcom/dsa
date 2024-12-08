#include "employee.h"
#include "employee_linked_list.h"
#include "employee_node.h"
#include <stdio.h>

int main() {
    printf("Employee Linked List\n");
    employee_linked_list_t *list = create_list();

    employee_t employee_1;
    employee_1.first_name = "Jane";
    employee_1.last_name = "Doe";
    employee_1.age = 23;

    employee_t employee_2;
    employee_2.first_name = "John";
    employee_2.last_name = "Doe";
    employee_2.age = 22;

    employee_t employee_3;
    employee_3.first_name = "Edith";
    employee_3.last_name = "Doe";
    employee_3.age = 22;

    /*prepend(list, &employee_1);*/
    /*prepend(list, &employee_2);*/
    /*prepend(list, &employee_3);*/
    append(list, &employee_1);
    append(list, &employee_2);
    append(list, &employee_3);

    employee_node_t *current = list->head;
    while (current != NULL) {
        printf("Employee %s, %s with %d years old.\n",
                current->employee->first_name,
                current->employee->last_name,
                current->employee->age
              );
        current = current->next;
    }
    return 0;
}
