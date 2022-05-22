//
//  Medico.hpp
//  Herencia_Persona_Estudiante
//
//  Created by Avril Ruiz on 19/05/22.
//

#ifndef Medico_hpp
#define Medico_hpp

#include "Persona.hpp"

class Medico : public Persona {
    
public:
    // constructores
    Medico();
    Medico(string, int, string, int);
    // sets
    string getEspecialidad();
    int getPacientes();
    // gets
    void setEspecialidad(string);
    void setPacientes(int);
    // método str 
    string str();
    
private:
    string especialidad;
    int pacientes;
    
};
#endif /* Medico_hpp */
