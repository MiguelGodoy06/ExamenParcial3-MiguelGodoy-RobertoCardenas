#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
//Primero hemos hecho unas estructuras para almacenar los datos del estudiante y luego un void pra declarar las distintas funciones
struct Student {
    char nombre[50];
    char genero;
    int edad;
    char carrera[50];
};

void printStudent(struct Student student);
void setStudentData(struct Student *student, const char *nombre,
                    char genero, int edad, const char *carrera);

#endif
//La fuente utilizada ha sido Claude