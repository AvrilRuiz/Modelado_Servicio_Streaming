//
//  Video.hpp
//  Evidencia
//
//  Created by Avril Ruiz on 28/05/22.
//

#ifndef Video_hpp
#define Video_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Video {
    
protected:
    
    // atributos de la clase
    string iD;
    string titulo;
    int duracion;
    string genero;
    double calificacionPromedio;
    
public:
    
    // métodos constructores
    Video ();
    Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);
    
    // métodos modificadores (sets)
    void setId(string _iD);
    void setTitulo(string _titulo);
    void setDurancion(int _duracion);
    void setGenero(string _genero);
    void setCalificacion(double _calificacionPromedio);
    
    // métodos acceso (gets)
    string getId();
    string getTitulo();
    int getDuracion();
    string getGenero();
    double getCalificacionPromedio();
    
    // otros métodos
    
    string str();
    
};


#endif /* Video_hpp */
