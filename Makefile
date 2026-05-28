CC = gcc
CFLAGS = -Wall -Wextra -pthread

# Lista de ejecutables de procesos
PROCESOS_EJEMPLOS = codigo01 codigo02 codigo03a codigo03b codigo04 codigo06 codigo07 codigo08 codigo09a codigo09b codigo10 codigo11 codigo12 codigo13
PROCESOS_EJERCICIOS = codigo05 codigo08 codigo14

# Lista de ejecutables de hilos
HILOS_EJEMPLOS = codigo14 codigo15 codigo16 codigo17
HILOS_EJERCICIOS = 

# Objetivos virtuales
.PHONY: all procesos hilos clean

all: procesos hilos

# ------------------------------------------------------- #

# Grupo de Procesos
procesos: procesos_ejemplos procesos_ejercicios

# Procesos ejemplos
procesos_ejemplos: $(PROCESOS_EJEMPLOS)

# Procesos ejercicios
procesos_ejercicios: $(PROCESOS_EJERCICIOS)

# ------------------------------------------------------- #

# Grupo de Hilos (sección para ejercicios de hilos)
hilos: hilos_ejemplos hilos_ejercicios

# Hilos ejemplos
hilos_ejemplos: $(HILOS_EJEMPLOS)

# Hilos ejercicios
hilos_ejercicios: $(HILOS_EJERCICIOS)

# ------------------------------------------------------- #

# Regla de patrón genérica para compilar cualquier ejecutable a partir de su .c homónimo
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# Regla para limpiar todos los ejecutables generados
clean:
	rm -f $(PROCESOS_EJEMPLOS) $(PROCESOS_EJERCICIOS) $(HILOS_EJEMPLOS) $(HILOS_EJERCICIOS)