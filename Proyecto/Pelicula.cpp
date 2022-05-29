//
//  Pelicula.cpp
//  Evidencia
//
//  Created by Avril Ruiz on 28/05/22.
//

#include "Pelicula.hpp"

// constructores
Pelicula::Pelicula() : Video() {
    oscares = 3;
}

Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares) : Video(_iD, _titulo, _duracion, _genero, _calificacionPromedio) {
    oscares = _oscares;
}

// método modificador
void Pelicula::setOscares(int _oscares) {
    oscares = _oscares;
}

// método de acceso
int Pelicula::getOscares() {
    return oscares;
}

// otro método
string Pelicula::str() {
    return "P " + iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio) + ',' + to_string(oscares);
}

