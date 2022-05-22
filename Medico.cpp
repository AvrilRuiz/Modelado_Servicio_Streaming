//
//  Medico.cpp
//  Herencia_Persona_Estudiante
//
//  Created by Avril Ruiz on 19/05/22.
//

#include "Medico.hpp"

Medico::Medico( ) : Persona( ) {
    especialidad = "Optimización";
    pacientes = 10000;
}

// Constructor con parámetros
Medico::Medico(string _nombre, int _edad, string _especialidad, int _pacientes) : Persona(_nombre, _edad) {
    // de pref. no usar - prefijo this-> para diferenciar el nombre del atributo al nombre del parámetro
    especialidad = _especialidad;
    pacientes = _pacientes;
}

string Medico::getEspecialidad() {
    return especialidad;
}

int Medico::getPacientes() {
    return pacientes;
}

string Medico::str( ) {
    return "Nombre: " + nombre + "\nEdad: " + to_string(edad) + "\nEspecialidad: "+ especialidad + "\nPacientes: " + to_string(pacientes);
}
