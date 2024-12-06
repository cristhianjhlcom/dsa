# Double Linked List
## Chanllenge #01

- [x] Crear un tipo `Employee` para nuestros empleados.
    - Tiene propiedad `first_name` que es un `char *`;
    - Tiene propiedad `last_name` que es un `char *`;
    - Tiene propiedad `age` que es un `int`;
- [x] Crear un tipo para manejar los nodos `EmployeeNode`;
    - Tiene propiedad `data` que sera un tipo `Employee`.
    - Tiene una propiedad `next` que apuntara a otro `EmployeeNode`.
    - Tiene una propiedad `prev` que apuntara a otro `EmployeeNode`.
- [x] Implementmos el metodo `create_list` para crear una lista de empleados.
    - [x] Asignar un espacio en memoria para `EmployeeLinkedList`.
    - [x] Establecer su propiedad `size` en `0`.
    - [x] Establecer la propiedad `head` en `NULL`.
    - [x] Establecer la propiedad `tail` en `NULL`.
    - [x] Debe regresar un puntero a `EmployeeLinkedList`.
- [] Implementemos el metodo `prepend` para una lista de empleados `EmployeeLinkedList`.
