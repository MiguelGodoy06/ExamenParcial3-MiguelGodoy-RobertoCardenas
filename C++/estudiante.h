#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include <iostream>

struct Estudiante {
    std::string nombre;
    int edad;
    std::string genero;
    std::string carrera;


    Estudiante(const std::string& nombre, int edad, const std::string& genero, const std::string& carrera)
        : nombre(nombre), edad(edad), genero(genero), carrera(carrera) {}


    void mostrarInformacion() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Género: " << genero << std::endl;
        std::cout << "Carrera: " << carrera << std::endl;
    }
};

#endif // ESTUDIANTE_H
