# Variables
CC = gcc
CFLAGS = -Wall -Wextra -g
OBJ_FILES = main.o employee_linked_list.o
TARGET = output

# Regla por defecto
all: $(TARGET) run

# Regla para compilar el programa final
$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^

# Regla para compilar main.c
main.o: main.c employee.h employee_linked_list.h employee_node.h
	$(CC) $(CFLAGS) -c $<

# Regla para compilar employee_linked_list.c
employee_linked_list.o: employee_linked_list.c employee_linked_list.h employee.h employee_node.h
	$(CC) $(CFLAGS) -c $<

# Regla para ejecutar el programa
run: $(TARGET)
	./$(TARGET)

# Limpiar archivos generados
clean:
	rm -f $(OBJ_FILES) $(TARGET)

.PHONY: all clean
