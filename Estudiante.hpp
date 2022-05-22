//
//  Estudiante.hpp
//  Herencia_Persona_Estudiante
//
//  Created by Avril Ruiz on 19/05/22.
//

#ifndef Estudiante_hpp
#define Estudiante_hpp

#include "Persona.hpp"
//clase derivada de la clase Persona

class Estudiante : public Persona {
    
public:
    // constructores
    Estudiante();
    Estudiante(string, int, string);
    
   // get y set
    string getCarrera();
    void setCarrera(string);
    
    // método str
    string str();
    
private:
    string carrera;
    
};

#endif /* Estudiante_hpp */
