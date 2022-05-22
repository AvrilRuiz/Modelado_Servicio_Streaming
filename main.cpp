//
//  main.cpp
//  Herencia_Persona_Estudiante
//
//  Created by Avril Ruiz on 19/05/22.
//

#include <iostream>
#include "Estudiante.hpp"
#include "Medico.hpp"

int main() {
    // insert code here...
    Persona anyaspy, chano("Chano", 80), chonita;
    Estudiante avril("Avril Ruiz", 17, "IDM");
    Estudiante chabelo("Chabelo", 125, "Medico"), chilindrina;
    Medico drChapa("Carlos Chapa", 40, "Dentista", 1979);
   
    //cout << "Hello, World!\n";
    //cout << anyaspy.str() << endl;
    cout << drChapa.str() << endl;
    cout << avril.str() << endl;
    cout << "Los datos del estudiante 1 son\n" + chabelo.str() << endl;
    cout << "Los datos del estudiante 2 son " << endl;
    cout << "Nombre " << chilindrina.getNombre() << "\nEdad: " << chilindrina.getEdad() << "\nCarrera: " << chilindrina.getCarrera() << endl;
    cout << "Los datos de la persona 1 son\n" << chano.str() << endl;
    cout << "Los datos de la persona 2 son " << endl;
    cout << "Nombre: " << chonita.getNombre() << "\nEdad:" << chonita.getEdad() << endl;
    
    return 0;
}
