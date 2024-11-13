#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stack>

#define TITULO 0
#define AUTOR 1
#define ANO_PUBLICACION 2
#define EDITORIAL 3
#define NUM_PAGINAS 4
#define CALIF_ESTRELLAS 5
#define GENERO 6

class Libro{
  private:
    std::string titulo;
    std::string autor;
    int anoPublicacion;
    std::string editorial;
    int numPaginas;
    float calificacionEstrellas;
    std::string genero;
  public:
    Libro();
    void setTitulo(std::string titu);
    void setAutor(std::string aut);
    void setAnoPublicacion(int anoPubli);
    void setEditorial(std::string edit);
    void setNumPaginas(int numPag);
    void setCalificacionEstrellas(float califEstre);
    void setGenero(std::string gen);
    std::string getTitulo();
    std::string getAutor();
    int getAnoPublicacion();
    std::string getEditorial();
    int getNumPaginas();
    float getCalificacionEstrellas();
    std::string getGenero();

    void mostrar();
    void mostrarTitulo();
    void mostrarAutor();
    void mostrarAnoPublicacion();
    void mostrarEditorial();
    void mostrarNumPaginas();
    void mostrarCalificacionEstrellas();
    void mostrarGenero();
    
    virtual ~Libro();
};


Libro::Libro() {
  titulo = "";
  autor = "";
  anoPublicacion = 0;
  editorial = "";
  numPaginas = 0;
  calificacionEstrellas = 0;
  genero = "";
}

void Libro::setTitulo(std::string titu){
  titulo = titu;
}

std::string Libro::getTitulo(){
  return titulo;
}

void Libro::setAutor(std::string aut){
  autor = aut;
}

std::string Libro::getAutor(){
  return autor;
}

void Libro::setAnoPublicacion(int anoPubli){
  anoPublicacion = anoPubli;
}

int Libro::getAnoPublicacion(){
  return anoPublicacion;
}

void Libro::setEditorial(std::string edit){
  editorial = edit;
}

std::string Libro::getEditorial(){
  return editorial;
}

void Libro::setNumPaginas(int numPag){
  numPaginas = numPag;
}

int Libro::getNumPaginas(){
  return numPaginas;
}

void Libro::setCalificacionEstrellas(float califEstre){
  calificacionEstrellas = califEstre;
}

float Libro::getCalificacionEstrellas(){
  return calificacionEstrellas;
}

void Libro::setGenero(std::string gen){
  genero = gen;
}

std::string Libro::getGenero(){
  return genero;
}


void Libro::mostrar(){
  std::cout << "Titulo del libro: " << titulo << std::endl;
  std::cout << "Autor: " << autor << std::endl;
  std::cout << "Año de publicación: " << anoPublicacion << std::endl;
  std::cout << "Editorial: " << editorial << std::endl;
  std::cout << "Número de páginas: " << numPaginas << std::endl;
  std::cout << "Calificación de estrellas: " << calificacionEstrellas << std::endl;
  std::cout << "Género: " << genero << std::endl;
}

void Libro::mostrarTitulo(){
  std::cout << "Titulo del libro: " << titulo << std::endl;
}

void Libro::mostrarAutor(){
  std::cout << titulo << " " << "Autor: " << autor << std::endl;
}
void Libro::mostrarAnoPublicacion(){
  std::cout << titulo << " " << "Año de publicación: " << anoPublicacion << std::endl;
}

void Libro::mostrarEditorial(){
  std::cout << titulo << " " << "Editorial: " << editorial << std::endl;
}

void Libro::mostrarNumPaginas(){
  std::cout << titulo << " " << "Número de páginas: " << numPaginas << std::endl;
}

void Libro::mostrarCalificacionEstrellas(){
  std::cout << titulo << " " << "Calificación de estrellas: " << calificacionEstrellas << std::endl;
}

void Libro::mostrarGenero(){
  std::cout << titulo << " " << "Género: " << genero << std::endl;
}


void merge(std::vector<Libro> &arr, int izquierda, int medio, int derecha, int criterio){

  int tam1 = medio - izquierda + 1;
  int tam2 = derecha - medio;

  std::vector<Libro> izq(tam1), der(tam2);

  for (int i = 0; i < tam1; i++){
    izq[i] = arr[izquierda + i];
  }

  for (int j = 0; j < tam2; j++){
    der[j] = arr[medio + 1 + j];
  }

  int i = 0, j = 0, k = izquierda;

  while (i < tam1 && j < tam2){

    if (criterio == ANO_PUBLICACION){
      
      if (izq[i].getAnoPublicacion() <= der[j].getAnoPublicacion()){
        arr[k] = izq[i];
        i = i + 1;
      }
      
      else{
        arr[k] = der[j];
        j = j + 1;
      }

    } else if (criterio == CALIF_ESTRELLAS){
      
      if (izq[i].getCalificacionEstrellas() <= der[j].getCalificacionEstrellas()){
        arr[k] = izq[i];
        i = i + 1;
      }

      else{
        arr[k] = der[j];
        j = j + 1;
      }

    } else if (criterio == NUM_PAGINAS){
      
      if (izq[i].getNumPaginas() <= der[j].getNumPaginas()){
        arr[k] = izq[i];
        i = i + 1;
      }

      else{
        arr[k] = der[j];
        j = j + 1;
      }
      
    }
    k = k + 1;
    }
  
  while (i < tam1){
    arr[k] = izq[i];
    i = i + 1;
    k = k + 1;
  }

  while (j < tam2){
    arr[k] = der[j];
    j = j + 1;
    k = k + 1;
  }
}

void mergeSort(std::vector<Libro> &arr, int izquierda, int derecha, int criterio){

  if (izquierda < derecha){
    int medio = izquierda + (derecha - izquierda) / 2;
    mergeSort(arr, izquierda, medio, criterio);
    mergeSort(arr, medio + 1, derecha, criterio);
    merge(arr, izquierda, medio, derecha, criterio);
  }
}


Libro::~Libro(){
}

#endif /*LIBRO_H_*/