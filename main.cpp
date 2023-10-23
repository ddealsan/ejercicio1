#include <iostream>
#include "Persona.h"
#include "Estudiante.h"
int suma(int a, int b) {
    return a + b;
}
int g = 20;
int main(){
    std::cout<<"Hola mundo!"<<std::endl;
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;


    Persona P1;
    P1.setNombre("Daniel");
    P1.setEdad(18);
    P1.setGenero("Masculino");

    std::cout << "\nDetalles de la Persona:" << std::endl;
    std::cout << "Nombre: " << P1.getNombre() << std::endl;
    std::cout << "Edad: " << P1.getEdad() << std::endl;
    std::cout << "Genero: " << P1.getGenero() << std::endl;

    Estudiante E1;
    E1.setNombre("Daniel");
    E1.setEdad(18);
    E1.setGenero("Masculino");
    E1.setGrado("Primero de informatica y ADE");

    std::cout << "\nDetalles del Estidante:" << std::endl;
    E1.mostrarDetalles();
    return 0;
}




