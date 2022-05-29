//
//  Video.cpp
//  Evidencia
//
//  Created by Avril Ruiz on 28/05/22.
//

#include "Video.hpp"


// métodos constructores

// inicializar con constructor default
Video::Video () {
    iD = "000";
    titulo =  "Skit";
    duracion = 15;
    genero = "Comedia";
    calificacionPromedio = 82.5;
}


Video::Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio) {
    iD = _iD;
    titulo =  _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacionPromedio = _calificacionPromedio;
}

// métodos modificadores (sets)
void Video::setId(string _iD) {
    iD = _iD;
}

void Video::setTitulo(string _titulo) {
    titulo =  _titulo;
}

void Video::setDurancion(int _duracion) {
    duracion = _duracion;
}

void Video::setGenero(string _genero) {
    genero = _genero;
}

void Video::setCalificacion(double _calificacionPromedio) {
    calificacionPromedio = _calificacionPromedio;
}

// métodos acceso (gets)
string Video::getId() {
    return  iD;
}

string Video::getTitulo() {
    return titulo;
}

int Video::getDuracion() {
    return duracion;
}

string Video::getGenero() {
    return genero;
}

double Video::getCalificacionPromedio() {
    return calificacionPromedio;
}

// otros métodos

string Video::str() {
    return "V " + iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio);
}
