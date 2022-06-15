//
//  Series.cpp
//  Evidencia
//
//  Created by Avril Ruiz on 09/06/22.
//

#include "Series.hpp"

// Constructor que inicializa el #arrPtrSeries[MAX SERIES] con nullptr
//y el atributo cantidad con 0
Series::Series() {
    *arrPtrSeries = nullptr;
    cantidad = 0;
}

//Deconstructor
Series::~Series(){
    //cout << "Se destruyó un objeto Películas" << endl;
}

// se asigna ese apuntador al arrPtrSeries[cantidad] en la posición actual que tenga
// actualmente el atributo cantidad
void Series::setPtrSerie(Serie *ptr) {
    if (cantidad < 50){
        arrPtrSeries[cantidad] = ptr;
    }
}

// Asigna al atributo cantidad el valor de _cantidad
void Series::setCantidadSeries(int _cantidad) {
    cantidad = _cantidad;
}

// Retorna un apuntador Serie que tiene el iD igual al _iD recibido en el parámetro de entrada
// si no existe ese _iD retorna nullptr
Serie* Series::getPtrSerie(string _iD) {
    for (int index = 0; index < cantidad; index ++){
        if (arrPtrSeries[index]->getId() == _iD)
            return arrPtrSeries[index];
    }
    return nullptr;
}

// Retorna el valor del atributo cantidad
int Series::getCantidadSeries() {
    return cantidad;
}

// Leer todas series y sus episodios desde un archivo
void Series::leerArchivo() {
    // Declaración de variables para usarlas al leer cada línea del archivo
    string linea, dato, row[6];
    // Variable para llevar el contador de cantidad de series leídas del archivo
    int iRow{}, iS{}, cantEpisodios{};
    // Declaración de variable para el archivo
    fstream lectura;
    Episodio *episodio;
    // LEER LAS SERIES
    lectura.open("/Users/avrilruiz/Desktop/OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey/Feb-Jun 2022/Programación Orientada a Objetos/Proyecto/Evidencia/Evidencia/Serie2021.csv", ios::in);
    // inicializar el atributo cantidad de Series con 0
    cantidad = 0;
    // ciclo para leer todo el archivo
    while ( getline(lectura, linea)) // lee una línea del archivo, corresponde a una serie
    {
        //Para que la mando desplegar ? para verificar que se esta leyendo correctamente el archivo
        std::stringstream registro(linea);
        iRow = 0;
        // Ciclo para separar los elementos de la serie (string)
        while (getline (registro, dato,',')) // separamos los elementos de la serie leída
        {
            row[iRow++] = dato;
        }
        // crear un objeto de la clase Serie, new retorna un pointer
        arrPtrSeries[cantidad] = new Serie(row[0], row[1], stoi (row[2]), row[3],stod (row[4]), 0);
        
        // vamos por la siguiente serie del archivo, se incrementa para la siguiente
        cantidad++;
    }
    lectura.close();
    
    // LEER LOS EPISODIOS DE LAS SERIES
    
    lectura.open("/Users/avrilruiz/Desktop/OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey/Feb-Jun 2022/Programación Orientada a Objetos/Proyecto/Evidencia/Evidencia/Episodio2021.csv", ios::in);
    // ciclo para leer todo el archivo
    while ( getline(lectura, linea))
    {
        // Desplegar el episodio leído - solo para corroborar
        std::stringstream registro(linea);
        iRow = 0;
        while (getline(registro, dato, ',')) // separar los datos del episodio desde la línea registro
        {
            row[iRow++] = dato;
            // al salir de aqui ya se separo toda la línea
        }
        // iD- convertir int- sacar la posicion de la serie
        iS = stoi(row[0]) - 500; // posición del arrealo donde esta el ptr de la serie pertenece el episodio
        // Crear el Episodio
        episodio = new Episodio(row[1], stoi(row[2]), stod (row[3]));
        // Traer la cantidad de episodios de la serie iS - la la vez retorna 0
        cantEpisodios = arrPtrSeries[iS]->getCantidad();
        if (cantEpisodios < 4){
            arrPtrSeries[iS]->setEpisodio(cantEpisodios,*episodio);
            arrPtrSeries[iS]->setCantidad(++cantEpisodios);
        }
    }
    lectura.close();
    // cierra leerArchivo
}

// Reporte de todas las Series que estan en el arreglo arrPtrSeries:
// Despliega todas las series contenidas en el arreglo 
void Series::reporteTodasLasSeries() {
    double acumulador = 0;
    if (cantidad > 0){
        for(int index = 0; index < cantidad; index++){
            cout << *arrPtrSeries[index];
            acumulador = acumulador  + arrPtrSeries[index]->getCalificacionPromedio();
        }
        cout << "Promedio Series:" << acumulador / cantidad << endl;
    }
    
    else
        cout << "No hay series para reportar" << endl;
}

// Reporte de todas Series del arreglo arrPtrSeries que tienen cierta calificacion
// Despliega todas las series cuya calificacionPromedio sea igual a la recibida en
// el parámetro de entrada _calificacion 
void Series::reporteConCalificacion(double _calificacion) {
    for (int index = 0; index < cantidad; index ++){
        if (arrPtrSeries[index]->getCalificacionPromedio() == _calificacion)
            cout << *arrPtrSeries[index];
    }
}

// Reporte de Series del arreglo arrPtrSeries que tienen cierto genero
// Despliega todas las series cuyo atributo genero sea igual al recibido en
// el parámetro de entrada _genero usa str( ) para desplegar la info de la serie
void Series::reporteGenero(string _genero) {
    for (int index = 0; index < cantidad; index ++){
        if (arrPtrSeries[index]->getGenero() == _genero)
            cout << arrPtrSeries[index]->str()<< endl;
    }
    
}

// Calcular la calificacion de cada serie en base a sus episodios
// manda llamar al método calculaCalPromedio de la clase Serie para
// que se calcule la calificación promedio de la Serie
void Series::calcularCalificacionSeries() {
    double promedio;
    for(int index = 0; index < cantidad; index++){
        promedio = arrPtrSeries[index] -> calculaCalPromedio();
        arrPtrSeries[index] -> setCalificacion(promedio);
    }
}

