//
//  Peliculas.hpp
//  Evidencia
//
//  Created by Avril Ruiz on 30/05/22.
//
#include <sstream>
#include <fstream>
#ifndef Peliculas_hpp
#define Peliculas_hpp

#include <stdio.h>
// composición
#include "Pelicula.hpp"

const int MAX_PEL= 50;
class Peliculas{
    
private:
    Pelicula *arrPtrPeliculas[MAX_PEL];
    int cantidad{};
    
public:
    
    //constructores
    Peliculas();
    
    // deconstructor
    ~Peliculas();
    
    // metodos gets
    Pelicula* getPtrPeliculas(string _iD);
    int getCantidadPeliculas();
    
    // meotdos sets
    void setPtrPelicula(Pelicula *ptrPelicula);
    void setCantidadPeliculas(int _cantidad);
    
    // otros metodos
    void leerArchivo();
    void reporteTodasLasPeliculas();
    void reporteConCalificacion(double _calificacionPromedio);
    void reporteGenero(string _genero);
    
};

#endif /* Peliculas_hpp */
