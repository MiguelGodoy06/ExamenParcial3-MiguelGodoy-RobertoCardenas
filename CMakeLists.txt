cmake_minimum_required(VERSION 3.29)
project(ExamenParcial3_MiguelGodoy_RobertoCardenas C)

set(CMAKE_C_STANDARD 11)

include_directories("Ejercicio en C")

add_executable(ExamenParcial3_MiguelGodoy_RobertoCardenas
    "Ejercicio en C/estudiante.c"
    "Ejercicio en C/estudiante.h"
    "Ejercicio en C/main.c"
    "Ejercicio en C/main.h")
