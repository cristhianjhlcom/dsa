# Double Linked List
## Chanllenge

### Creacion de Linked List para `Employee`
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

### Metodo `prepend`
- [ ] Implementemos el metodo `prepend` para una lista de empleados `EmployeeLinkedList`.
    - [ ] Debe verificar si el employee existe en la lista.
        - Si existe no agregamos nada y devolvemos `false`.
        - Si no existe, procedemos con logica de agregar el employee a la lista.
    - [x] Crear un nuevo nodo para `EmployeeNode` en memoria.
        - Asegurate de mostrar un mensaje de error si no se asigno correctamente.
    - [x] Asignamos el campo `data` del nodo al item `Employee` pasado por parametro.
    - [x] Establecemos el campo `next` que apunte al `head` actual de la lista, puede ser `NULL`.
    - [x] Establecemos el campo `prev` en `NULL` (Como estamos insertando en el `head` de la lista no deberia tener un nodo previo.
    - [x] Verificar si el `head` actual tiene algun nodo.
        - Si lo tiene le asignamos el nuevo nodo a el nodo prev del `head` actual. `list->head->prev = new_node`
        - Si no, continuamos con el codigo, significa que es el primer nodo insertado.
    - [x] Cambiamos el puntero del `head` para que apunte al nuevo nodo `list->head = new_node`;
    - [x] Revisamo si la `tail` de la lista es `NULL`.
        - Si lo es asignamos el nuevo nodo. (esto quiere decir que es el primer valor insertado)
        - Si no, no hacemos nada y continuamos con el codigo
    - [x] Incrementamos el tamano de la lista `size++`.
    - [ ] Si todo fue correcto devolvemo `true`.

### Metodo `append`
- [ ] Implementemos el metodo `append` para una lista de empleados `EmployeeLinkedList`.
    - [ ] Debe verificar si el employee existe en la lista.
        - Si existe no agregamos nada y devolvemos `false`.
        - Si no existe, procedemos con logica de agregar el employee a la lista.
    - [x] Crear un nuevo nodo para `EmployeeNode` en memoria.
        - Asegurate de mostrar un mensaje de error si no se asigno correctamente.
    - [x] Asignamos el campo `data` del nodo al item `Employee` pasado por parametro.
    - [x] Establecemos el campo `prev` que apunte al `tail` actual de la lista, puede ser `NULL`.
    - [x] Establecemos el campo `next` en `NULL` (Como estamos insertando en el `tail` de la lista no deberia tener un nodo siguiente.
    - [x] Verificar si el `tail` actual tiene algun nodo.
        - Si lo tiene le asignamos el nuevo nodo a el nodo next del `tail` actual. `list->tail->next = new_node`
        - Si no, continuamos con el codigo, significa que es el primer nodo insertado.
    - [x] Cambiamos el puntero del `tail` para que apunte al nuevo nodo `list->tail = new_node`;
    - [x] Revisamo si la `head` de la lista es `NULL`.
        - Si lo es asignamos el nuevo nodo. (esto quiere decir que es el primer valor insertado)
        - Si no, no hacemos nada y continuamos con el codigo
    - [x] Incrementamos el tamano de la lista `size++`.
    - [ ] Si todo fue correcto devolvemo `true`.

### Metodo `delete`
- [ ] Implementemos el metodo `delete` para una lista de empleados `EmployeeLinkedList`.

### Metodo `pop`
- [ ] Implementemos el metodo `pop` para una lista de empleados `EmployeeLinkedList`.
