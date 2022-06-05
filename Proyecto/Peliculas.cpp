//
//  Peliculas.cpp
//  Evidencia
//
//  Created by Avril Ruiz on 30/05/22.
//

#include "Peliculas.hpp"


//constructores
Peliculas::Peliculas() {
    cantidad = 0;
}

// deconstructor
Peliculas::~Peliculas(){
    //cout << "Se destruyó un obejto Películas" << endl;
}


// metodos gets
Pelicula* Peliculas::getPtrPeliculas(string _iD) {
    for (int index = 0; index < cantidad; index ++){
        if (arrPtrPeliculas[index]->getId() == _iD)
            return arrPtrPeliculas[index];
    }
    return new Pelicula;
}

int Peliculas::getCantidadPeliculas() {
    return cantidad;
}

// meotdos sets
void Peliculas::setPtrPelicula(Pelicula *_ptrPelicula) {
    if (cantidad < 50){
        arrPtrPeliculas[cantidad++] = _ptrPelicula;
    }
}

void Peliculas::setCantidadPeliculas(int _cantidad) {
    cantidad = _cantidad;
}

// otros metodos
void Peliculas::leerArchivo() {
    // Método que lee de un archivo cv la información de cada película,
    // crea un objeto de la case Pelicula con la información leída del archivo
    // usando el operador new, para que ese apuntador que retorna el new
    // sea el que se se almacene en el arreglo de apuntadores - arrPtrPeliculas-
    // y las va dando de alta en la siguiente posición disponible en el
    // arreglo
    // fin - file input
    fstream fin;
    // Para almacenar los datos leídos del archivo :arreglo de strings
    string row[6];
    // line almacena la linea leída, y word la palabra que se saca de line
    string line, word;
    // Abrir archivo de entrada
    fin.open ("/Users/avrilruiz/Desktop/OneDrive - Instituto Tecnologico y de Estudios Superiores de Monterrey/Feb-Jun 2022/Programación Orientada a Objetos/Proyecto/Evidencia/Evidencia/Pelicula-1.csv", ios::in);
    // inicializar el atributo cantidad con 0
    cantidad = 0;
    // lee una línea del archivo y la almacena en line
    while (getline(fin, line)){
        // despliega en consola la linea  - BORRAR o COMENTAR cout's
        //cout << cantidad << line << endl;
        // usado para separar las palabras split()
        stringstream s(line);
        // read every column data of a row and
        // store it in a string variable,'word'
        int iR = 0;
        // extrae caracteres de s y los almacena en word hasta que encuentra el delimitador
        while (getline(s, word, ',')) {
            //añade la word al arrealo row e incrementa iR o/la proxima palabra
            row[iR++]=word;
        }
        //[0] 100, [1]Pulp Fiction, [2]178, [3]accion, [4]9.2, [5]1
        // Operador new crear un objeto del tipo Pelicula- mem dinamica - HEAP
        // stoi- funcion que convierte un string a int
        // stod-funcion que convierte un string a double
        setPtrPelicula(new Pelicula(row[0], row[1], stoi(row[2]),
                                    row[3], stod(row[4]), stoi(row[5])));
        // Se muestra en consola la separación - BORRAR o COMENTAR cout's
    
         /*
         cout << "iD:" << row[0] << "\n";
         cout << "Titulo:" << row[1] << "\n";
         cout << "Duracion: " << row[2] << "\n";
         cout << "Genero: " << row[3] << "\n";
         cout << "Calificacion: " << row[4] << "\n";
         cout << "Oscares: " << row[5] << "\n";
         */
        // desplegamos en consola la película con el método str() de pelicula-BORRAR o COMENTAR cout's
        //cout << "Dentro del objeto:" << arrPtrPeliculas[cantidad]->str() << endl;
        // Incrementar el atributo cantidad para la siquiente pelicula
        
    }
    fin.close();
    // sale del ciclo cuando va no existen más lineas en el archivo
    // Desplegar todas las películas leídas - BORRAR o COMENTAR ciclo con cout's
    /*
     for(int iR = 0; iR < cantidad; iR++){
     cout << iR << "-" << arrPtrPeliculas[iR]->str()<< endl;
     }
     */
}


void Peliculas::reporteTodasLasPeliculas() {
    double acumulador = 0;
    if (cantidad > 0){
        
        for(int index = 0; index < cantidad; index++){
            cout << arrPtrPeliculas[index]->str() << endl;
            acumulador = acumulador  + arrPtrPeliculas[index]->getCalificacionPromedio();
        }
        
        cout << "Promedio:" << acumulador / cantidad << endl;
    }
    
    else
        cout << "No hay películas para reportar" << endl;
}

void Peliculas::reporteConCalificacion(double _calificacionPromedio) {
    for (int index = 0; index < cantidad; index ++){
        if (arrPtrPeliculas[index]->getCalificacionPromedio() == _calificacionPromedio)
            cout  << arrPtrPeliculas[index]->str()<< endl;
    }
}

void Peliculas::reporteGenero(string _genero) {
    for (int index = 0; index < cantidad; index ++){
        if (arrPtrPeliculas[index]->getGenero() == _genero)
            cout  << arrPtrPeliculas[index]->str()<< endl;
    }
}

