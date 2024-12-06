#include "employee_linked_list.h"
#include <stdio.h>

int main() {
    printf("Employee Linked List\n");
    employee_linked_list_t *list = create_list();
    printf("List size (%d)\n", list->size);
    return 0;
}
