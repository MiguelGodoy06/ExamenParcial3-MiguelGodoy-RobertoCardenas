#include <stdio.h>
#include "main.h"
#include "estudiante.h"
//
void ingresarDatos(struct Student *estudiante) {
    printf("Ingrese nombre: ");
    scanf(" %[^\n]s", estudiante->nombre);

    do {
        printf("Ingrese género (M/F): ");
        scanf(" %c", &estudiante->genero);
    } while(estudiante->genero != 'M' && estudiante->genero != 'F');

    printf("Ingrese edad: ");
    scanf("%d", &estudiante->edad);

    printf("Ingrese carrera: ");
    scanf(" %[^\n]s", estudiante->carrera);
}

int main() {
    struct Student estudiante;

    printf("\n=== Sistema de Registro de Estudiantes ===\n");
    ingresarDatos(&estudiante);
    printf("\nDatos registrados:\n");
    printStudent(estudiante);

    return 0;
}
//La fuente utilizada ha sido Claude