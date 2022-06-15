//
//  Pelicula.hpp
//  Evidencia
//
//  Created by Avril Ruiz on 28/05/22.
//

#ifndef Pelicula_hpp
#define Pelicula_hpp

#include "Video.hpp"

// clase derivada de Video

class Pelicula : public Video {

private:
    
    int oscares;

public:
    
    // métodos constructores
    Pelicula();
    Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);
    
    // método deconstructor
    ~Pelicula();
    
    // método modificador
    void setOscares(int _oscares);
    
    // método de acceso
    int getOscares();
    
    // otros métodos
    string str();
    friend ostream & operator << (ostream &out, const Pelicula &p);
};
    

#endif /* Pelicula_hpp */
