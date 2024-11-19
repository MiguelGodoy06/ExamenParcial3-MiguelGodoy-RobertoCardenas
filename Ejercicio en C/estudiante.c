#include <stdio.h>
#include <string.h>
#include "estudiante.h"
//Imprimimos las funciones primero para imprimir los datos del estudiante y despues la función para poder establecer los datos.

void printStudent(struct Student student) {
    printf("\n=== Datos del Estudiante ===\n");
    printf("Nombre: %s\n", student.nombre);
    printf("Género: %c\n", student.genero);
    printf("Edad: %d\n", student.edad);
    printf("Carrera: %s\n", student.carrera);
}

void setStudentData(struct Student *student, const char *nombre,
                    char genero, int edad, const char *carrera) {
    strcpy(student->nombre, nombre);
    student->genero = genero;
    student->edad = edad;
    strcpy(student->carrera, carrera);
}
//La fuente utilizada ha sido Claude