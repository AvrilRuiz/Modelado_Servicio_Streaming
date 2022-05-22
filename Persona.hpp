//
//  Persona.hpp
//  Herencia_Persona_Estudiante
//
//  Created by Avril Ruiz on 19/05/22.
//

// header guards
#ifndef Persona_hpp
#define Persona_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Persona {
    
public:

    // constructor default y parámetros
    Persona();
    Persona(string, int);
    
    // gets
    string getNombre();
    int getEdad();
    
    // sets
    void setNombre(string);
    void setEdad(int);
    
    // método para concatenar info
    string str();
    
protected:
    string nombre;
    int edad;
    
};

#endif /* Persona_hpp */

