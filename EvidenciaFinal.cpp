#include <iostream>
using namespace std;

#include "EvidenciaFinal.h"


Video::Video(string _Tipo, string _Nombre, string _Genero,int _Ani, int _Duracion){
    Tipo = _Tipo;
    Nombre = _Nombre;
    Genero = _Genero;
    AniLanzamiento = _Ani;
    Duracion = _Duracion;
}

Video::Video(string _Tipo, string _Nombre, string _Genero, int _Calificacion, int _Ani, int _Duracion){
    Tipo = _Tipo;
    Nombre = _Nombre;
    Genero = _Genero;
    Calificacion = _Calificacion;
    AniLanzamiento = _Ani;
    Duracion = _Duracion;
}

void Video::CalificaVideo(){
    int _Calificacion;
    cout << "Ingresa la calificacion: " << endl;
    cin >> _Calificacion;
    Calificacion = _Calificacion;

    }

Pelicula::Pelicula(string _Tipo, string _Nombre, string _Genero, int _Calificacion, int _Ani, int _Duracion, string _Director , int _Nominaciones):Video(_Tipo, _Nombre, _Genero, _Calificacion, _Ani, _Duracion){
    Director = _Director;
    Nominaciones = _Nominaciones;
    }

Pelicula::Pelicula(string _Tipo, string _Nombre, string _Genero, int _Ani, int _Duracion, string _Director):Video(_Tipo, _Nombre, _Genero,_Ani,_Duracion){
    Director = _Director;
}

Serie::Serie(string _Tipo, string _Nombre, string _Genero, int _Calificacion, int _Ani, int _Duracion,int _Temporadas, int _Capitulos):Video(_Tipo, _Nombre, _Genero, _Calificacion, _Ani, _Duracion){
    Temporadas = _Temporadas;
    Capitulos = _Capitulos;
}

Serie::Serie(string _Tipo, string _Nombre, string _Genero, int _Ani, int _Duracion,int _Temporadas, int _Capitulos):Video(_Tipo, _Nombre, _Genero,_Ani, _Duracion){
    Temporadas = _Temporadas;
    Capitulos = _Capitulos;
}


void Serie::MuestraDatos(){
    Video::MuestraDatos();
    cout << "Temporadas de la serie: " << Temporadas << endl;
    cout << "Capitulos de la serie: " << Capitulos << endl;
}


void Pelicula::MuestraDatos(){
    Video::MuestraDatos();
    cout << "El director de la pelicula es: " << Director << endl;
    cout << "La pelicula tiene " << Nominaciones << " Nominaciones" <<endl;
}

void Video::MuestraDatos(){
    cout << "Tipo de Video: " << Tipo << endl;
    cout << "Nombre de el Video: " << Nombre <<endl;
    cout << "Genero de el Video: " << Genero <<endl;
    cout << "Calificacion de el Video: " << Calificacion <<endl;
    cout << "Año de la lanzamiento de el Video: " << AniLanzamiento <<endl;
    cout << "Duracion de el Video: " << Duracion <<endl;
    }

bool Video::Compara(int _comp){
        if(_comp==Calificacion){
            MuestraDatos();

            return true;
        }else 
        return false ;
}