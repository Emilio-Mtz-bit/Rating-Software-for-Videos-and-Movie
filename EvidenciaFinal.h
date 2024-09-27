#include <iostream>
using namespace std;

class Video{
  public:
    Video(string _Tipo, string _Nombre, string _Genero, int _Calificacion, int _Ani, int _Duracion);
    Video(string _Tipo, string _Nombre, string _Genero,int _Ani, int _Duracion);
    void CalificaVideo();
    virtual void MuestraDatos();
    bool Compara(int _comp);
  private:
    string Tipo;
    string Nombre;
    string Genero;
    int Calificacion;
    int AniLanzamiento;
    int Duracion;
};

class Pelicula: public Video{
    public:
        Pelicula(string _Tipo, string _Nombre, string _Genero, int _Calificacion, int _Ani, int _Duracion, string _Director , int _Nominaciones );
        Pelicula(string _Tipo, string _Nombre, string _Genero, int _Ani, int _Duracion, string _Director);
        void MuestraDatos();
    private:
        string Director;
        int Nominaciones;
};

class Serie: public Video{
    public:
        Serie(string _Tipo, string _Nombre, string _Genero, int _Calificacion, int _Ani, int _Duracion,int _Temporadas, int _Capitulos);
        Serie(string _Tipo, string _Nombre, string _Genero, int _Ani, int _Duracion,int _Temporadas, int _Capitulos);
        void MuestraDatos();
    private:
    int Temporadas;
    int Capitulos;
};