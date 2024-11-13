#ifndef NOVEDAD_H
#define NOVEDAD_H

#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <fstream>

class Novedad{
  private:
    std::string nombreLibro;
    std::string autor;
    int anoPublicacion;
    std::string editorial;
    int numPaginas;
    float calificacion;
    std::string comentarios;
  public:
    Novedad();
    void setNombreLibro(std::string);
    void setAutor(std::string);
    void setAnoPublicacion(int);
    void setEditorial(std::string);
    void setNumPaginas(int);
    void setCalificacion(float);
    void setComentarios(std::string);

    std::string getNombreLibro();
    std::string getAutor();
    int getAnoPublicacion();
    std::string getEditorial();
    int getNumPaginas();
    float getCalificacion();
    std::string getComentarios();

    void mostrarNovedad();
    std::string toFileStr();
    void fromFileStr(std::string info);
};


class Usuario{
  private:
    std::string nombre;
    std::string apellido;
    std::string correo;
    std::string contrasena;
    std::stack<Novedad> novedades;
  public:
    Usuario();

    void setNombre(std::string);
    void setApellido(std::string);
    void setCorreo(std::string);
    void setContrasena(std::string);

    std::string getNombre();
    std::string getApellido();
    std::string getCorreo();
    std::string getContrasena();

    bool validarContrasena(std::string input);
    void guardarArchivo();
    bool cargarArchivo();
    std::string getFileName();
    
    void registrarNuevoLibro();
    void consultarNuevoLibro();
    void mostrarDetallesNuevoLibro();
};


Novedad::Novedad(){
  nombreLibro = "";
  autor = "";
  anoPublicacion = 0;
  editorial = "";
  numPaginas = 0;
  calificacion = 0;
  comentarios = "";
}

std::string Novedad::toFileStr(){
  return nombreLibro + "|" + autor + "|" + std::to_string(anoPublicacion) + "|" + editorial + "|" + std::to_string(numPaginas) + "|" + std::to_string(calificacion) + "|" + comentarios; 
}

void Novedad::fromFileStr(std::string info){
  size_t pos = 0;
  pos = info.find(",");
  nombreLibro = info.substr(0, pos);
  info.erase(0, pos + 1);

  pos = info.find(",");
  autor = info.substr(0, pos);
  info.erase(0, pos + 1);

  pos = info.find(",");
  anoPublicacion = stoi(info.substr(0, pos));
  info.erase(0, pos + 1);
  
  pos = info.find(",");
  editorial = info.substr(0, pos);
  info.erase(0, pos + 1);

  pos = info.find(",");
  numPaginas = stoi(info.substr(0, pos));
  info.erase(0, pos + 1);

  pos = info.find(",");
  calificacion = stof(info.substr(0, pos));
  info.erase(0, pos + 1);

  comentarios = info;
};


Usuario::Usuario(){
  nombre = "";
  apellido = "";
  correo = "";
  contrasena = "";
}

bool Usuario::validarContrasena(std::string input){
  return contrasena == input;
}

std::string Usuario::getFileName(){
  return "Usuario.txt";
}

void Usuario::guardarArchivo(){
  std::ofstream archivo(getFileName());

  if (archivo.is_open()){
    archivo << nombre << "|" << apellido << "|" << correo << "|" << contrasena << std::endl;

    std::stack<Novedad> temp = novedades;
    std::vector<Novedad> tempVector;

    while (!temp.empty()){
      tempVector.push_back(temp.top());
      temp.pop();
    }

    for (int i = tempVector.size() - 1; i >= 0; i--){
      archivo << tempVector[i].toFileStr() << std::endl;
    }
    archivo.close();
    std::cout << "Archivo guardado exitosamente." << std::endl;
  }

  else{
    std::cout << "No se pudo abrir el archivo." << std::endl;
  }
}

bool Usuario::cargarArchivo(){
  std::ifstream archivo(getFileName());

  if (archivo.is_open()){
    getline(archivo, nombre, '|');
    getline(archivo, apellido, '|');
    getline(archivo, correo, '|');
    getline(archivo, contrasena);

    std::string linea;
    while (getline(archivo, linea)){
      if (!linea.empty()){
        Novedad noved;
        noved.fromFileStr(linea);
        novedades.push(noved);
      }
    }
    archivo.close();
    return true;
  }
  return false;
}

void Usuario::registrarNuevoLibro(){
  Novedad nuevaNovedad;
  nuevaNovedad.setNombreLibro();
  nuevaNovedad.setAutor();
  nuevaNovedad.setAnoPublicacion();
  nuevaNovedad.setEditorial();
  nuevaNovedad.setNumPaginas();
  nuevaNovedad.setCalificacion();
  nuevaNovedad.setComentarios();
  novedades.push(nuevaNovedad);
  
  std::cout << "Libro leido y registrado exitosamente por:" << nombre << std::endl;
  
  guardarArchivo();
}

void Usuario::consultarNuevoLibro(){
  if (!novedades.empty()){
    std::cout << "Último libro leído por " << nombre << ":" << std::endl;
    novedades.top().mostrarNovedad();
  }
  else{
    std::cout << "No hay libros leídos aún." << std::endl;
  }
}

void Usuario::mostrarDetallesNuevoLibro(){
  if (!novedades.empty()){
    std::cout << "No hay mas libros leidos y registrados por " << nombre << std::endl;
    return;
  }

  std::cout << "Libros leídos y registrados por " << nombre << ":" << std::endl;
  std::stack<Novedad> temp = novedades;

  while (!temp.empty()){
    temp.top().mostrarNovedad();
    temp.pop();
  }
}

void Usuario::setNombre(std::string nombre){
  std::cout << "Escribe tu nombre: " << std::endl;
  std::cin >> nombre;
}

void Usuario::setApellido(std::string apellido){
  std::cout << "Escribe tu apellido: " << std::endl;
  std::cin >> apellido;
}

void Usuario::setCorreo(std::string correo){
  std::cout << "Escribe tu correo: " << std::endl;
  std::cin >> correo;
}

void Usuario::setContrasena(std::string contrasena){
  std::cout << "Escribe tu contraseña deseada: " << std::endl;
  std::cin >> contrasena;
}

std::string Usuario::getNombre(){
  return nombre;
}

std::string Usuario::getApellido(){
  return apellido;
}

std::string Usuario::getCorreo(){
  return correo;
}

std::string Usuario::getContrasena(){
  return contrasena;
}

void Novedad::setNombreLibro(std::string nombreLibro){
  std::cout << "Escribe el nombre del libro: " << std::endl;
  std::cin >> nombreLibro;
}

void Novedad::setAutor(std::string autor){
  std::cout << "Escribe el autor del libro: " << std::endl;
  std::cin >> autor;
}

void Novedad::setAnoPublicacion(int anoPublicacion){
  std::cout << "Escribe el año de publicación del libro: " << std::endl;
  std::cin >> anoPublicacion;
}

void Novedad::setEditorial(std::string editorial){
  std::cout << "Escribe la editorial del libro: " << std::endl;
  std::cin >> editorial;
}

void Novedad::setNumPaginas(int numPaginas){
  std::cout << "Escribe el número de páginas del libro: " << std::endl;
  std::cin >> numPaginas;
}

void Novedad::setCalificacion(float calificacion){
  std::cout << "Escribe la calificación del libro: " << std::endl;
  std::cin >> calificacion;
}

void Novedad::setComentarios(std::string comentarios){
  std::cout << "Escribe los comentarios del libro: " << std::endl;
  std::cin >> comentarios;
}

std::string Novedad::getNombreLibro(){
  return nombreLibro;
}

std::string Novedad::getAutor(){
  return autor;
}

int Novedad::getAnoPublicacion(){
  return anoPublicacion;
}

std::string Novedad::getEditorial(){
  return editorial;
}

int Novedad::getNumPaginas(){
  return numPaginas;
}

float Novedad::getCalificacion(){
  return calificacion;
}

std::string Novedad::getComentarios(){
  return comentarios;
}

void Novedad::mostrarNovedad(){
  std::cout << "Nombre del libro: " << nombreLibro << std::endl;
}

#endif /*NOVEDAD_H*/